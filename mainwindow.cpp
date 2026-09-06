#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

int pts;
int pps = 0;
int ppc = 1;

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

