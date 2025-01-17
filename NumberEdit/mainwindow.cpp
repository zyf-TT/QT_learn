#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_increase_clicked()
{
    int num = ui->resoult->text().toInt();
    num++;
    ui->resoult->setText(QString::number(num));
}

void MainWindow::on_decrease_clicked()
{
    int num = ui->resoult->text().toInt();
    num--;
    ui->resoult->setText(QString::number(num));
}

void MainWindow::on_resoult_linkActivated(const QString &link)
{
}
