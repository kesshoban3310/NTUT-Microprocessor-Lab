/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Shining;
    QPushButton *Switching;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_1;
    QPushButton *Switching_2;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(782, 545);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Shining = new QPushButton(centralWidget);
        Shining->setObjectName(QStringLiteral("Shining"));
        Shining->setGeometry(QRect(500, 80, 111, 31));
        Switching = new QPushButton(centralWidget);
        Switching->setObjectName(QStringLiteral("Switching"));
        Switching->setGeometry(QRect(490, 400, 111, 31));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(370, 80, 104, 31));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 180, 92, 23));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(230, 180, 92, 23));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(60, 440, 92, 23));
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(230, 440, 92, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 270, 131, 141));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../light.png")));
        label_7->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 20, 131, 141));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../no_light.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 270, 131, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../no_light.jpg")));
        label_3->setScaledContents(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 131, 141));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../light.png")));
        label_5->setScaledContents(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 270, 131, 141));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../no_light.jpg")));
        label_4->setScaledContents(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 20, 131, 141));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../light.png")));
        label_6->setScaledContents(true);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 280, 131, 141));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../light.png")));
        label_8->setScaledContents(true);
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setEnabled(true);
        label_1->setGeometry(QRect(10, 20, 141, 141));
        label_1->setPixmap(QPixmap(QString::fromUtf8("../no_light.jpg")));
        label_1->setScaledContents(true);
        Switching_2 = new QPushButton(centralWidget);
        Switching_2->setObjectName(QStringLiteral("Switching_2"));
        Switching_2->setGeometry(QRect(490, 440, 111, 31));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(490, 150, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(390, 210, 118, 23));
        progressBar->setValue(0);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(650, 210, 48, 26));
        spinBox->setKeyboardTracking(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 782, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Shining->setText(QApplication::translate("MainWindow", "LED Shining", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        Shining->setShortcut(QApplication::translate("MainWindow", "W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        Switching->setText(QApplication::translate("MainWindow", "Switching on", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        Switching->setShortcut(QApplication::translate("MainWindow", "A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox->setText(QApplication::translate("MainWindow", "LED1", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox->setShortcut(QApplication::translate("MainWindow", "1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_2->setText(QApplication::translate("MainWindow", "LED2", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_2->setShortcut(QApplication::translate("MainWindow", "2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_3->setText(QApplication::translate("MainWindow", "LED3", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "LED4", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_4->setShortcut(QApplication::translate("MainWindow", "4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_7->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        label_1->setText(QString());
        Switching_2->setText(QApplication::translate("MainWindow", "Switching off", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        Switching_2->setShortcut(QApplication::translate("MainWindow", "D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
