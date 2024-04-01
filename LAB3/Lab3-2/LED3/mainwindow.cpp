#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "led_module.h"
#include <QTimer>

#define LED1 396
#define LED2 466
#define LED3 392
#define LED4 481

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_1->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);

    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);

    led.gpio_export(LED1);
    led.gpio_export(LED2);
    led.gpio_export(LED3);
    led.gpio_export(LED4);

    led.gpio_set_dir(LED1,"on");
    led.gpio_set_dir(LED2,"on");
    led.gpio_set_dir(LED3,"on");
    led.gpio_set_dir(LED4,"on");

    led.gpio_set_value(LED1,0);
    led.gpio_set_value(LED2,0);
    led.gpio_set_value(LED3,0);
    led.gpio_set_value(LED4,0);
}

MainWindow::~MainWindow()
{
    led.gpio_set_value(LED1,0);
    led.gpio_set_value(LED2,0);
    led.gpio_set_value(LED3,0);
    led.gpio_set_value(LED4,0);

    led.gpio_unexport(LED1);
    led.gpio_unexport(LED2);
    led.gpio_unexport(LED3);
    led.gpio_unexport(LED4);
    delete timer;
    delete ui;
}
void MainWindow::switching(){

    vis[1] = switcher; vis[2] = switcher;
    vis[3] = not switcher; vis[4] = not switcher;
    led.gpio_set_value(LED1,vis[1]);
    led.gpio_set_value(LED2,vis[2]);
    led.gpio_set_value(LED3,vis[3]);
    led.gpio_set_value(LED4,vis[4]);
    picture_shining();
    switcher = not switcher;
    time++;
    int t = ui->progressBar->value();
    timer->setInterval(t*10);
}
void MainWindow::on_Switching_clicked(){
    switcher = 1;
    time = 0;
    led.gpio_set_value(LED1,0);
    led.gpio_set_value(LED2,0);
    led.gpio_set_value(LED3,0);
    led.gpio_set_value(LED4,0);
    text = ui->textEdit->toPlainText();
    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(switching()));
    int t = ui->progressBar->value();
    timer->setInterval(t*10);
    timer->start();
}
void MainWindow::on_Shining_clicked(){
    led.gpio_set_value(LED1,0);
    led.gpio_set_value(LED2,0);
    led.gpio_set_value(LED3,0);
    led.gpio_set_value(LED4,0);
    picture_shining();
    led.gpio_set_value(LED1,vis[1]);
    led.gpio_set_value(LED2,vis[2]);
    led.gpio_set_value(LED3,vis[3]);
    led.gpio_set_value(LED4,vis[4]);
}

void MainWindow::on_checkBox_clicked(bool checked){
    vis[1] = checked;
}


void MainWindow::on_checkBox_2_clicked(bool checked){
    vis[2] = checked;
}

void MainWindow::on_checkBox_3_clicked(bool checked){
    vis[3] = checked;
}

void MainWindow::on_checkBox_4_clicked(bool checked){
    vis[4] = checked;
}

void MainWindow::picture_shining(){
    if(vis[1]){
        ui->label_1->setVisible(false);
        ui->label_5->setVisible(true);
    }
    else{
        ui->label_1->setVisible(true);
        ui->label_5->setVisible(false);
    }
    if(vis[2]){
        ui->label_2->setVisible(false);
        ui->label_6->setVisible(true);
    }
    else{
        ui->label_2->setVisible(true);
        ui->label_6->setVisible(false);
    }
    if(vis[3]){
        ui->label_3->setVisible(false);
        ui->label_7->setVisible(true);
    }
    else{
        ui->label_3->setVisible(true);
        ui->label_7->setVisible(false);
    }
    if(vis[4]){
        ui->label_4->setVisible(false);
        ui->label_8->setVisible(true);
    }
    else{
        ui->label_4->setVisible(true);
        ui->label_8->setVisible(false);
    }
}

void MainWindow::on_Switching_2_clicked(){
    vis[1] = 0; vis[2] = 0;
    vis[3] = 0; vis[4] = 0;
    led.gpio_set_value(LED1,vis[1]);
    led.gpio_set_value(LED2,vis[2]);
    led.gpio_set_value(LED3,vis[3]);
    led.gpio_set_value(LED4,vis[4]);
    picture_shining();
    timer->stop();
}
