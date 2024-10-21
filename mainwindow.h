#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QFileDialog>
#include <QWidget>
#include <QScreen>
#include <QString>
#include <QTimer>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void switchScreens();

private slots:

    void on_beginButton_clicked();

    void on_prof_button_clicked();

    void on_student_button_clicked();

    void on_prof_login_clicked();

    void on_stu_login_clicked();

    void on_createQuizButton_clicked();

    void on_uploadFile_clicked();

    QString cancelFile();

    void on_goHomeButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
};
#endif // MAINWINDOW_H
