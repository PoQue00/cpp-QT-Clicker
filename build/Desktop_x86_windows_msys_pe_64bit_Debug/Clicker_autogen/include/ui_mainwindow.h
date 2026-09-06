/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionQuit;
    QAction *actionReset_Stats;
    QAction *actionMain_Menu;
    QWidget *centralwidget;
    QLabel *points;
    QPushButton *plus_pts;
    QLabel *ppc;
    QLabel *pps;
    QPushButton *Shop;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *plus_pps1;
    QPushButton *plus_ppc1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(583, 398);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName("actionLoad");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionReset_Stats = new QAction(MainWindow);
        actionReset_Stats->setObjectName("actionReset_Stats");
        actionMain_Menu = new QAction(MainWindow);
        actionMain_Menu->setObjectName("actionMain_Menu");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        points = new QLabel(centralwidget);
        points->setObjectName("points");
        points->setGeometry(QRect(230, 20, 91, 21));
        plus_pts = new QPushButton(centralwidget);
        plus_pts->setObjectName("plus_pts");
        plus_pts->setGeometry(QRect(230, 80, 51, 24));
        ppc = new QLabel(centralwidget);
        ppc->setObjectName("ppc");
        ppc->setGeometry(QRect(230, 40, 61, 16));
        pps = new QLabel(centralwidget);
        pps->setObjectName("pps");
        pps->setGeometry(QRect(230, 60, 71, 16));
        Shop = new QPushButton(centralwidget);
        Shop->setObjectName("Shop");
        Shop->setGeometry(QRect(0, 0, 41, 24));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 583, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menuBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName("dockWidget");
        dockWidget->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        dockWidget->setDockLocation(Qt::DockWidgetArea::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        plus_pps1 = new QPushButton(dockWidgetContents);
        plus_pps1->setObjectName("plus_pps1");
        plus_pps1->setGeometry(QRect(0, 0, 111, 24));
        plus_ppc1 = new QPushButton(dockWidgetContents);
        plus_ppc1->setObjectName("plus_ppc1");
        plus_ppc1->setGeometry(QRect(0, 20, 121, 24));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad);
        menuFile->addSeparator();
        menuFile->addAction(actionReset_Stats);
        menuFile->addSeparator();
        menuFile->addAction(actionMain_Menu);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionReset_Stats->setText(QCoreApplication::translate("MainWindow", "Reset Stats", nullptr));
        actionMain_Menu->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        points->setText(QCoreApplication::translate("MainWindow", "Points: 0", nullptr));
        plus_pts->setText(QCoreApplication::translate("MainWindow", "+Points", nullptr));
        ppc->setText(QCoreApplication::translate("MainWindow", "PPC: ", nullptr));
        pps->setText(QCoreApplication::translate("MainWindow", "PPS:", nullptr));
        Shop->setText(QCoreApplication::translate("MainWindow", "Shop", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        plus_pps1->setText(QCoreApplication::translate("MainWindow", "Buy 1 PPS for 50 Pts", nullptr));
        plus_ppc1->setText(QCoreApplication::translate("MainWindow", "Buy 1 PPC for 30 Pts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
