#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "submission.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui -> stackedWidget -> setCurrentIndex(0);

    QPixmap firstLogo("/Users/jadesomeda/Qt/quizBuddy/QuizBuddy/frame4-3.png"); //make sure to inlcude file name
    int width = ui -> firstPgLogo -> width();
    int height = ui -> firstPgLogo  -> height();
    ui -> firstPgLogo -> setPixmap(firstLogo.scaled(width,height,Qt::KeepAspectRatio));

    QPixmap secondLogo(":/new/prefix1/frame4.png");
    int w = ui -> logo2 -> width();
    int h = ui -> logo2  -> height();
    ui -> logo2 -> setPixmap(secondLogo.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap c(":/new/prefix1/loading.png"); //make sure to inlcude file name
    int wid = ui ->  loading_label -> width();
    int hei = ui -> loading_label -> height();
    ui -> loading_label -> setPixmap(c.scaled(wid,hei,Qt::KeepAspectRatio));


    // QPixmap d(":/Users/jadesomeda/Qt/quizBuddy/QuizBuddy/mascot.png"); //make sure to inlcude file name
    // int widt = ui ->  buddy -> width();
    // int heig = ui -> buddy -> height();
    // ui -> b -> setPixmap(d.scaled(widt,heig,Qt::KeepAspectRatio));

    QPixmap e(":/new/prefix1/logo22XS.png"); //make sure to inlcude file name
    int widt = ui -> prof_logo -> width();
    int heig = ui -> prof_logo -> height();
    ui -> prof_logo -> setPixmap(e.scaled(widt,heig,Qt::KeepAspectRatio));

    QPixmap f(":/new/prefix1/logo22XS.png"); //make sure to inlcude file name
    int width_ = ui -> stu_logo -> width();
    int height_ = ui -> stu_logo -> height();
    ui -> stu_logo -> setPixmap(f.scaled(width_,height_,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_beginButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
}


void MainWindow::on_prof_button_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(2);
}


void MainWindow::on_student_button_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(3);
}




void MainWindow::on_prof_login_clicked()
{
    QString userName = ui -> prof_user -> text();
    QString userPass = ui -> prof_pass -> text();

    if(userName == "Reem" && userPass == "12345")
    {
        ui -> stackedWidget -> setCurrentIndex(4);
    }
    else
    {
        QMessageBox::warning(this, "filler", "Please input a valid username or password!");
    }

}


void MainWindow::on_stu_login_clicked()
{
    QString userName = ui -> stu_user -> text();
    QString userPass = ui -> stu_pass -> text();

    if(userName == "Jade" && userPass == "12345")
    {
        ui -> stackedWidget -> setCurrentIndex(9);
    }
    else
    {

        QMessageBox::warning(this, "filler", "Please input a valid username or password!");
    }
}


void MainWindow::on_createQuizButton_clicked()
{

    ui -> stackedWidget -> setCurrentIndex(6);

}


void MainWindow::switchScreens()
{
    timer -> stop();

    //int currentIndex = ui -> stackedWidget -> currentIndex();
    // int nextIndex = nextScreenIndex; //FIX if doesnt work tru ommiting after %
    ui -> stackedWidget->setCurrentIndex(5);

}

QString MainWindow::cancelFile()
{


    QString filesname = "null";

    QString file = QFileDialog::getOpenFileName(this, "Open a file", "/Users");
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Are you sure this is the correct file", QMessageBox::Yes|QMessageBox::No |QMessageBox::Close);

    while(reply == QMessageBox::No)
    {
        QString filesname = QFileDialog::getOpenFileName(this, "Open a file", "/Users");
        reply = QMessageBox::question(this, "", "Are you sure this is the correct file", QMessageBox::Yes|QMessageBox::No |QMessageBox::Close);
    }

    if(reply == QMessageBox::Yes)
    {
        filesname = file;
    }
    else
    {
        filesname = "null";

    }

    return filesname;

}




void MainWindow::on_uploadFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open a file", "/Users");
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Are you sure this is the correct file", QMessageBox::Yes|QMessageBox::No |QMessageBox::Close);
    //make this a funcntion that can be called multiple time

    if(reply == QMessageBox::Close)
    {
        ui -> stackedWidget -> setCurrentIndex(6);
    }
    else if(reply == QMessageBox::No)
    {
        filename = cancelFile();
    }


    if(filename == "null")
    {
        ui -> stackedWidget -> setCurrentIndex(6);
        return;
    }

    ui -> stackedWidget -> setCurrentIndex(7);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::switchScreens); //FIXME should switch to a different screen
    timer -> start(5000);


}



void MainWindow::on_goHomeButton_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(4);
}

