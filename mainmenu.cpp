#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "mainwindow.h"


#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>

void load_game();

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_Quit_clicked()
{
    QApplication::quit();
}

void MainMenu::on_New_Game_clicked()
{
    MainWindow *gameWindow = new MainWindow();
    gameWindow->show();
    this->hide();
}

void MainMenu::on_Load_Game_clicked()
{
    load_game();
    MainWindow *gameWindow = new MainWindow();
    gameWindow->show();
    this->hide();
}

