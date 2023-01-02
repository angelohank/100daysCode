/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *ledFrase;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ledPalavra;
    QPushButton *btnFind;
    QLabel *lblResultado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ledFrase = new QLineEdit(centralwidget);
        ledFrase->setObjectName("ledFrase");
        ledFrase->setGeometry(QRect(20, 130, 751, 51));
        QFont font;
        font.setPointSize(15);
        ledFrase->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 681, 41));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 220, 681, 41));
        label_2->setFont(font);
        ledPalavra = new QLineEdit(centralwidget);
        ledPalavra->setObjectName("ledPalavra");
        ledPalavra->setGeometry(QRect(20, 270, 751, 51));
        ledPalavra->setFont(font);
        btnFind = new QPushButton(centralwidget);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(290, 360, 161, 61));
        btnFind->setFont(font);
        lblResultado = new QLabel(centralwidget);
        lblResultado->setObjectName("lblResultado");
        lblResultado->setGeometry(QRect(32, 460, 721, 41));
        lblResultado->setFont(font);
        lblResultado->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Insira a frase em que deseja encontrar determinada palavra:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Insira a palavra que deseja encontrar:", nullptr));
        btnFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        lblResultado->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
