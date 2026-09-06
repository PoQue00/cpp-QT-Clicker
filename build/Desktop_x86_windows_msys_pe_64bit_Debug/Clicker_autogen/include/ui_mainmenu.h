/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QLabel *Title_Text;
    QLabel *Title2_text;
    QPushButton *Load_Game;
    QPushButton *New_Game;
    QPushButton *Quit;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(800, 600);
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName("centralwidget");
        Title_Text = new QLabel(centralwidget);
        Title_Text->setObjectName("Title_Text");
        Title_Text->setGeometry(QRect(260, 160, 111, 16));
        Title2_text = new QLabel(centralwidget);
        Title2_text->setObjectName("Title2_text");
        Title2_text->setGeometry(QRect(240, 180, 171, 21));
        Title2_text->setSizeIncrement(QSize(1, 1));
        Title2_text->setBaseSize(QSize(2, 2));
        Load_Game = new QPushButton(centralwidget);
        Load_Game->setObjectName("Load_Game");
        Load_Game->setGeometry(QRect(280, 220, 80, 24));
        New_Game = new QPushButton(centralwidget);
        New_Game->setObjectName("New_Game");
        New_Game->setGeometry(QRect(280, 250, 80, 24));
        Quit = new QPushButton(centralwidget);
        Quit->setObjectName("Quit");
        Quit->setGeometry(QRect(280, 280, 80, 24));
        MainMenu->setCentralWidget(centralwidget);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainWindow", nullptr));
        Title_Text->setText(QCoreApplication::translate("MainMenu", "C++ Clicker Demo", nullptr));
        Title2_text->setText(QCoreApplication::translate("MainMenu", "Made with the Qt Framework", nullptr));
        Load_Game->setText(QCoreApplication::translate("MainMenu", "Load Game", nullptr));
        New_Game->setText(QCoreApplication::translate("MainMenu", "New Game", nullptr));
        Quit->setText(QCoreApplication::translate("MainMenu", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
