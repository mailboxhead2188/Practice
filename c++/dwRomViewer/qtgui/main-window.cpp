
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

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setMinimumWidth(650);
    this->mainWidget = new QWidget();
    this->gameplayWidget = new QWidget();
    this->funWidget = new QWidget();
    this->setCentralWidget(this->mainWidget);

    this->initWidgets();
    this->initStatus();
    this->layout();
    this->initSlots();
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

    this->tabWidget->addTab(mainMonster, "Monsters");

    // Locations

    /* Add tab names and initialize layouts */

    
    this->mainWidget->setLayout(vbox);
}

void MainWindow::addLabel(QString text, QGridLayout *obj, int tab, int x, int y)
{
    obj->addWidget(new QLabel(text, this), x, y, 1, 1);
}

void MainWindow::placeWidget(QWidget *widget, int tab, int x, int y)
{
    //this->optionGrids[tab]->addWidget(widget, x, y, 0);
}

void MainWindow::handleRomFile()
{
    dw_rom rom;
    dwr_init(&rom, this->romFile->text().toLatin1().constData());
    this->loadRomToUI(&rom);
}

void MainWindow::loadRomToUI(dw_rom *rom)
{
    // Load levels
    // TODO: Better UI layout.

    for(int i=1; i<30; i++)
    {
        this->levels->addItem((std::to_string(i+1) + "-" + std::to_string(rom->xp_reqs[i+1])).c_str());
    }

    // Load Spells
    /*
    std::vector<std::string> spell_map =
    { "HEAL", "HURT", "SLEEP", "RADIANT", "STOPSPELL", "OUTSIDE", "RETURN", "REPEL", "HEALMORE", "HURTMORE" };
    
    gridObj.reset(this->spells);

    for(int i=0; i<std::size(spell_map); i++)
    {
        gridObj->addWidget(new QLabel(QString(std::to_string(i).c_str())), i+1, 0);
        gridObj->addWidget(new QLabel(QString(std::to_string(rom->xp_reqs[i+1]).c_str())), i+1, 1);
    }
    */
}