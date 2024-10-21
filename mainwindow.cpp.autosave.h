#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui -> stackedWidget -> setCurrentIndex(0);

    QPixmap a("/Users/jadesomeda/Qt/quizBuddy/QuizBuddy/frame4-3.png"); //make sure to inlcude file name
    int w = ui -> firstPgLogo -> width();
    int h = ui -> firstPgLogo  -> height();
    ui -> firstPgLogo -> setPixmap(a.scaled(w,h,Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_beginButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}

