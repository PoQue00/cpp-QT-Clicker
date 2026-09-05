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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *points;
    QPushButton *plus_pts;
    QPushButton *plus_pps1;
    QPushButton *plus_ppc1;
    QLabel *ppc;
    QLabel *pps;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(243, 88);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        points = new QLabel(centralwidget);
        points->setObjectName("points");
        points->setGeometry(QRect(0, 0, 91, 21));
        plus_pts = new QPushButton(centralwidget);
        plus_pts->setObjectName("plus_pts");
        plus_pts->setGeometry(QRect(0, 60, 51, 24));
        plus_pps1 = new QPushButton(centralwidget);
        plus_pps1->setObjectName("plus_pps1");
        plus_pps1->setGeometry(QRect(70, 0, 161, 24));
        plus_ppc1 = new QPushButton(centralwidget);
        plus_ppc1->setObjectName("plus_ppc1");
        plus_ppc1->setGeometry(QRect(70, 20, 171, 24));
        ppc = new QLabel(centralwidget);
        ppc->setObjectName("ppc");
        ppc->setGeometry(QRect(0, 20, 61, 16));
        pps = new QLabel(centralwidget);
        pps->setObjectName("pps");
        pps->setGeometry(QRect(0, 40, 71, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        points->setText(QCoreApplication::translate("MainWindow", "Points: 0", nullptr));
        plus_pts->setText(QCoreApplication::translate("MainWindow", "+Points", nullptr));
        plus_pps1->setText(QCoreApplication::translate("MainWindow", "Buy 1 PPS for 50 Pts", nullptr));
        plus_ppc1->setText(QCoreApplication::translate("MainWindow", "Buy 1 PPC for 30 Pts", nullptr));
        ppc->setText(QCoreApplication::translate("MainWindow", "PPC: ", nullptr));
        pps->setText(QCoreApplication::translate("MainWindow", "PPS:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
