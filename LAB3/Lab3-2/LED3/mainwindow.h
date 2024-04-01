#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QMainWindow>
#include <vector>
#include "led_module.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Switching_clicked();
    void on_Shining_clicked();

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);

    void picture_shining();

    void switching();


    void on_Switching_2_clicked();


private:
    Ui::MainWindow *ui;
    std::vector<bool> vis = {0,0,0,0,0};
    int time = 0;
    bool switcher=1;
    LED_module led;
    QString text;
    QTimer *timer;
};

#endif // MAINWINDOW_H
