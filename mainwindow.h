#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_plus_pts_clicked();

    void on_plus_ppc1_clicked();

    void on_plus_pps1_clicked();

    void on_actionQuit_triggered();

    void on_actionReset_Stats_triggered();

    void on_actionSave_triggered();

    void on_actionLoad_triggered();

    void on_actionMain_Menu_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
