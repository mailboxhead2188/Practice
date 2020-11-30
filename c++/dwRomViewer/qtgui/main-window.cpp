
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QStatusBar>
#include <QtCore/QObject>
#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtCore/QIODevice>
#include <QtGui/QPalette>
#include <QtGui/QColor>
#include <QtGui/QGuiApplication>
#include <QtGui/QClipboard>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>

#define __STDC_FORMAT_MACROS
#include <cinttypes>

#include "main-window.h"
#include "common/dwr.h"

#define PANE_COLUMNS 2
#define PANE_ROWS    7

const std::vector<std::string> tab_names {
    "Levels",
    "Spells",
    "Monsters",
    "Locations",
};

enum tabs {
    LEVELS,
    SPELLS,
    MONSTERS,
    LOCATIONS
};


std::vector<std::string> monster_map =
{
    "SLIME",       
    "RED_SLIME",
    "DRAKEE",
    "GHOST",
    "MAGICIAN",
    "MAGIDRAKEE",  
    "SCORPION",
    "DRUIN",
    "POLTERGEIST",
    "DROLL",
    "DRAKEEMA",    
    "SKELETON",
    "WARLOCK",
    "METAL_SCORPION",
    "WOLF",
    "WRAITH",      
    "METAL_SLIME",
    "SPECTER",
    "WOLFLORD",
    "DRUINLORD",
    "DROLLMAGI",   
    "WYVERN",
    "ROGUE_SCORPION",
    "WRAITH_KNIGHT",
    "GOLEM",
    "GOLDMAN",     
    "KNIGHT",
    "MAGIWYVERN",
    "DEMON_KNIGHT",
    "WEREWOLF",
    "GREEN_DRAGON",
    "STARWYVERN",
    "WIZARD",
    "AXE_KNIGHT",
    "BLUE_DRAGON",
    "STONEMAN",   
    "ARMORED_KNIGHT",
    "RED_DRAGON",
    "DRAGONLORD_1",
    "DRAGONLORD_2"
};

std::vector<std::string> spell_map =
{ "HEAL", "HURT", "SLEEP", "RADIANT", "STOPSPELL", "OUTSIDE", "RETURN", "REPEL", "HEALMORE", "HURTMORE" };

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setMinimumWidth(650);
    this->mainWidget = new QWidget();
    this->setCentralWidget(this->mainWidget);

    this->initWidgets();
    this->initStatus();
    this->layout();
    this->initSlots();

    this->rom = new dw_rom();
}

void MainWindow::initStatus() {
    QStatusBar *status = this->statusBar();
    status->showMessage("Ready");
    QPalette palette = this->palette();
    palette.setColor(QPalette::Background, Qt::lightGray);
    palette.setColor(QPalette::Foreground, Qt::black);
    status->setPalette(palette);
    status->setAutoFillBackground(true);
}

void MainWindow::initWidgets()
{
    this->romFile = new FileEntry(this);
    this->tabWidget = new QTabWidget(this);
}

void MainWindow::initSlots()
{
    connect(this->romFile, SIGNAL(textEdited(QString)), this,
                SLOT(handleRomFile()));
    connect(this->monsterSelector, SIGNAL(activated(int)),
            this, SLOT(handleMonsterChange()));
}

void MainWindow::layout()
{
    QVBoxLayout *vbox;
    QListWidget *list;

    vbox = new QVBoxLayout();
    vbox->addWidget(this->tabWidget);
    vbox->addWidget(this->romFile, 0, 0);

    // Levels
    this->levels = new QListWidget();
    this->tabWidget->addTab(this->levels, "Levels");

    // Spells
    this->spells = new QListWidget();
    this->tabWidget->addTab(this->spells, "Spells");

    // Monsters
    this->monsters = new QWidget();
    // Layout is:
    // QWidget (Page)
    // Layout: QVBoxLayout
    // --> QComboBox (Monster)
    // --> QGridLayout (Selected Monster Stats)
    // Widget: Page
    QWidget *mainMonster = new QWidget();
    QVBoxLayout *monsterLayout = new QVBoxLayout();
    QWidget *page = new QWidget();
    mainMonster->setLayout(monsterLayout);
    this->monsterSelector = new QComboBox();
    this->monsterStats = new QGridLayout();
    monsterLayout->addWidget(this->monsterSelector);
    page->setLayout(this->monsterStats);
    monsterLayout->addWidget(page);
    this->monsterStats->addWidget(new QLabel("Agility", this), 0, 0, 1, 1);
    this->monsterStats->addWidget(new QLabel("Strength", this), 1, 0, 1, 1);
    this->monsterStats->addWidget(new QLabel("HP", this), 2, 0, 1, 1);
    this->monsterStats->addWidget(new QLabel("Gold", this), 3, 0, 1, 1);
    this->monsterStats->addWidget(new QLabel("XP", this), 4, 0, 1, 1);
    this->monsterStats->addWidget(new QLabel("Resistance", this), 5, 0, 1, 1);

    this->agiWidget = new QLabel("", this);
    this->strWidget = new QLabel("", this);
    this->hpWidget = new QLabel("", this);
    this->goldWidget = new QLabel("", this);
    this->xpWidget = new QLabel("", this);
    this->resWidget = new QLabel("", this);

    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->agiWidget), 0, 1, 1, 1);
    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->strWidget), 1, 1, 1, 1);
    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->hpWidget), 2, 1, 1, 1);
    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->goldWidget), 3, 1, 1, 1);
    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->xpWidget), 4, 1, 1, 1);
    this->monsterStats->addWidget(dynamic_cast<QLabel *>(this->resWidget), 5, 1, 1, 1);

    this->tabWidget->addTab(mainMonster, "Monsters");

    // Locations

    /* Add tab names and initialize layouts */

    
    this->mainWidget->setLayout(vbox);
}

void MainWindow::handleRomFile()
{
    dwr_init(this->rom, this->romFile->text().toLatin1().constData());
    this->loadRomToUI(this->rom);
}

void MainWindow::loadRomToUI(dw_rom *rom)
{
    std::map<int, int> xpToLevel;
    // Load levels
    // TODO: Better UI layout.
    for(int i=1; i<30; i++)
    {
        this->levels->addItem((std::to_string(i+1) + "-" + std::to_string(rom->xp_reqs[i+1])).c_str());
        xpToLevel.insert(std::pair<int, int>(rom->xp_reqs[i+1], i+1));
    }
    
    // Load Spells
    for(int i=0; i<std::size(spell_map); i++)
    {
        int level = xpToLevel.at(rom->xp_reqs[i+1]);
        this->spells->addItem((spell_map[i] + " - " + (std::to_string(level))).c_str());
    }
    
    // Load Monsters
    for (int i=SLIME; i <= RED_DRAGON; i++) {
        this->monsterSelector->addItem(monster_map[i].c_str());
    }
    
}

void MainWindow::handleMonsterChange()
{
    int selectedIndex = this->monsterSelector->currentIndex();
    dw_enemy selectedMonster = rom->enemies[selectedIndex];

    (dynamic_cast<QLabel *>(this->agiWidget))->setText(std::to_string(selectedMonster.agi).c_str());
    (dynamic_cast<QLabel *>(this->strWidget))->setText(std::to_string(selectedMonster.str).c_str());
    (dynamic_cast<QLabel *>(this->goldWidget))->setText(std::to_string(selectedMonster.gold).c_str());
    (dynamic_cast<QLabel *>(this->xpWidget))->setText(std::to_string(selectedMonster.xp).c_str());
    (dynamic_cast<QLabel *>(this->hpWidget))->setText(std::to_string(selectedMonster.hp).c_str());
    (dynamic_cast<QLabel *>(this->resWidget))->setText(std::to_string(selectedMonster.s_ss_resist).c_str());
}