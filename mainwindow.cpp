#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainmenu.h"

#include <QTimer>

#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>


int pts;
int pps = 0;
int ppc = 1;

void save_game();
void load_game();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->ppc->setText("PPC: " + QString::number(ppc));
    ui->pps->setText("PPS: " + QString::number(pps));

    QTimer *timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, [this]()
            {
            pts = pts + pps;
            ui->points->setText("Points: " + QString::number(pts));
            ui->ppc->setText("PPC: " + QString::number(ppc));
            ui->pps->setText("PPS: " + QString::number(pps));
            });

    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_plus_pts_clicked()
{
    pts = pts + ppc;
    ui->points->setText("Points: " + QString::number(pts));
    // ui->points->setText(QString::number(pts));
}


void MainWindow::on_plus_ppc1_clicked()
{
    std::string label_text = "Buy 1 PPC for 30 pts";

    if(pts >= 30){
        pts -= 30;
        ppc += 1;
        ui->points->setText("Points: " + QString::number(pts));
        ui->ppc->setText("PPC: " + QString::number(ppc));
    }
    else{
        ui->plus_ppc1->setText("You Need " + QString::number(pts - 30) + " more points.");
            QTimer::singleShot(5000, this, [this, label_text](){
                ui->plus_ppc1->setText(QString::fromStdString(label_text));
                });
    }
}


void MainWindow::on_plus_pps1_clicked()
{
    std::string label_text = "Buy 1 PPS for 50 pts";

    if(pts >= 50){
        pts -= 50;
        pps += 1;
        ui->points->setText("Points: " + QString::number(pts));
        ui->pps->setText("PPS: " + QString::number(pps));
    }
    else{
        ui->plus_ppc1->setText("You Need " + QString::number(pts - 50) + " more points.");
        QTimer::singleShot(5000, this, [this, label_text](){
            ui->plus_ppc1->setText(QString::fromStdString(label_text));
        });
    }
}



void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionReset_Stats_triggered()
{
    pts = 0;
    ppc = 1;
    pps = 0;
    ui->points->setText("Points: " + QString::number(pts));
    ui->ppc->setText("PPC: " + QString::number(ppc));
    ui->pps->setText("PPS: " + QString::number(pps));
}


void MainWindow::on_actionSave_triggered()
{
    save_game();
}


void MainWindow::on_actionLoad_triggered()
{
    load_game();
    ui->points->setText("Points: " + QString::number(pts));
    ui->ppc->setText("PPC: " + QString::number(ppc));
    ui->pps->setText("PPS: " + QString::number(pps));
}

void save_game()
{
    QJsonObject saveData;

    saveData["pts"] = pts;
    saveData["ppc"] = ppc;
    saveData["pps"] = pps;

    QJsonDocument document(saveData);

    QFile file("save.json");
    if(!file.open(QIODevice::WriteOnly))
        return;
    file.write(document.toJson());
    file.close();
}

void load_game()
{
    QFile file("save.json");

    if (!file.open(QIODevice::ReadOnly))
        return;

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonObject saveData = document.object();

    pts = saveData["pts"].toInt();
    ppc = saveData["ppc"].toInt();
    pps = saveData["pps"].toInt();
}
void MainWindow::on_actionMain_Menu_triggered()
{
    MainMenu *mainMenu = new MainMenu();
    mainMenu->show();
    this->hide();
}

void MainWindow::on_Shop_clicked()
{
    if(ui->dockWidget->isVisible()){
        ui->dockWidget->hide();
    }
    else if(!ui->dockWidget->isVisible()){
        ui->dockWidget->show();
    }
}

