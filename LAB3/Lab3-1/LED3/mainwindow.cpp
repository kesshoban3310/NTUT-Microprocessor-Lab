#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "led_module.h"
#include <QTimer>

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
}

MainWindow::~MainWindow()
{
    delete timer;
    delete ui;
}
void MainWindow::switching(){
    if(time> text.toInt()*2-1){
        vis[1] = vis[2] = 0;
        vis[3] = vis[4] = 0;
        picture_shining();
        timer->stop();
        time = 0;
    }
    else{
        vis[1] = vis[2] = switcher;
        vis[3] = vis[4] = not switcher;
        picture_shining();

        switcher = not switcher;
        time++;
    }
    return;
}
void MainWindow::on_Switching_clicked(){
    switcher = 1;
    time = 0;

    text = ui->textEdit->toPlainText();
    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(switching()));
    timer->setInterval(1000);
    timer->start();
}
void MainWindow::on_Shining_clicked(){
    picture_shining();
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
