#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::find(const QString &frase, const QString &palavraFind)
{

    QList<QString> fraseSeparada = frase.split(' ');

    for (int i = 0; i < fraseSeparada.length(); i++) {
        if (fraseSeparada[i] == palavraFind) {
            return i;
        }
    }

    return -1;
}


void MainWindow::on_btnFind_clicked()
{

    QString frase = ui->ledFrase->text();\
    QString palavra = ui->ledPalavra->text();

    QString fraseDisplay = "";
    int index = find(frase, palavra);

    if (index < 0) {
        fraseDisplay = "Não consegui achar a palavra :(";
    } else {
        fraseDisplay = "Encontrei a palavra " + palavra + " na posição " + QString::number(index);
    }

    ui->lblResultado->setText(fraseDisplay);

}

