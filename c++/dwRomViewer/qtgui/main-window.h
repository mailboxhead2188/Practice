//
// Created by mcgrew on 7/17/17.
//

#ifndef DWRANDOMIZER_MAIN_WINDOW_H
#define DWRANDOMIZER_MAIN_WINDOW_H

#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>

#include "widgets.h"
#include "common/dwr_types.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#define TAB_COUNT 7

struct configuration {
    char input_file[1024];
    char output_dir[1024];
    char flags[64];
};


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    typedef QWidget super;
    MainWindow(QWidget *parent = 0);

private slots:
    void handleRomFile();
    void handleMonsterChange();

private:
    void layout();
    void initSlots();
    void initWidgets();
    void initStatus();
    void loadRomToUI(dw_rom *rom);

private:
    QWidget *mainWidget;
    QTabWidget *tabWidget;
    FileEntry *romFile;
    QListWidget *levels;
    QListWidget *spells;
    QWidget *monsters;
    QComboBox *monsterSelector;
    QGridLayout *monsterStats;
    dw_rom *rom;
    QWidget *agiWidget;
    QWidget *strWidget;
    QWidget *hpWidget;
    QWidget *goldWidget;
    QWidget *xpWidget;
    QWidget *resWidget;
};


#endif //DWRANDOMIZER_MAIN_WINDOW_H
