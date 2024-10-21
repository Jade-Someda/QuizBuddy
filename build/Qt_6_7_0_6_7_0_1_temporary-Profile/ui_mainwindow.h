/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *pg1;
    QLabel *firstPgLogo;
    QPushButton *beginButton;
    QWidget *pg2;
    QLabel *logo2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *prof_button;
    QPushButton *student_button;
    QWidget *pg3;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *prof_user;
    QLineEdit *prof_pass;
    QLabel *label_10;
    QPushButton *prof_login;
    QLabel *prof_logo;
    QWidget *pg4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *stu_user;
    QLineEdit *stu_pass;
    QLabel *label_11;
    QPushButton *stu_login;
    QLabel *stu_logo;
    QWidget *pg5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_5;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *createQuizButton;
    QWidget *pg6;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_13;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_6;
    QLabel *label_60;
    QLabel *label_61;
    QLabel *label_62;
    QPushButton *createQuiz_5;
    QLabel *label_68;
    QWidget *pg7;
    QScrollArea *createQuizScroll;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_7;
    QFrame *quizPageBackground;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QPushButton *uploadFile;
    QPushButton *goHomeButton;
    QWidget *pg8;
    QLabel *loading_label;
    QLabel *label_31;
    QWidget *pg9;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_14;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_7;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QPushButton *createQuiz_6;
    QLabel *label_67;
    QPushButton *createQuiz_7;
    QWidget *pg10;
    QScrollArea *createQuizScroll_4;
    QWidget *scrollAreaWidgetContents_16;
    QVBoxLayout *verticalLayout_10;
    QFrame *quizPageBackground_4;
    QLabel *label_46;
    QLabel *label_47;
    QGroupBox *questionObj_2;
    QTextEdit *questionStr_2;
    QGroupBox *stuAns_2;
    QCheckBox *choiceA_2;
    QCheckBox *choiceB_2;
    QCheckBox *choiceD_2;
    QCheckBox *choiceC_2;
    QPushButton *submitQues1_2;
    QLabel *label_48;
    QWidget *pg11;
    QScrollArea *createQuizScroll_7;
    QWidget *scrollAreaWidgetContents_11;
    QVBoxLayout *verticalLayout_11;
    QFrame *quizPageBackground_8;
    QLabel *label_49;
    QLabel *label_50;
    QGroupBox *questionObj_6;
    QTextEdit *questionStr_6;
    QGroupBox *stuAns_6;
    QCheckBox *choiceA_6;
    QCheckBox *choiceB_6;
    QCheckBox *choiceD_6;
    QCheckBox *choiceC_6;
    QPushButton *submitQues1_6;
    QLabel *label_51;
    QWidget *pg12;
    QScrollArea *createQuizScroll_8;
    QWidget *scrollAreaWidgetContents_12;
    QVBoxLayout *verticalLayout_12;
    QFrame *quizPageBackground_9;
    QLabel *label_52;
    QLabel *label_53;
    QGroupBox *questionObj_7;
    QTextEdit *questionStr_7;
    QGroupBox *stuAns_7;
    QCheckBox *choiceA_7;
    QCheckBox *choiceB_7;
    QCheckBox *choiceD_7;
    QCheckBox *choiceC_7;
    QPushButton *submitQues1_7;
    QLabel *label_54;
    QPushButton *submitQues1_8;
    QWidget *pg13;
    QLabel *label_161;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-30, 0, 831, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);"));
        pg1 = new QWidget();
        pg1->setObjectName("pg1");
        firstPgLogo = new QLabel(pg1);
        firstPgLogo->setObjectName("firstPgLogo");
        firstPgLogo->setGeometry(QRect(230, 80, 401, 281));
        firstPgLogo->setPixmap(QPixmap(QString::fromUtf8("../proj-im/frame4-3.png")));
        beginButton = new QPushButton(pg1);
        beginButton->setObjectName("beginButton");
        beginButton->setGeometry(QRect(350, 360, 141, 41));
        beginButton->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        stackedWidget->addWidget(pg1);
        pg2 = new QWidget();
        pg2->setObjectName("pg2");
        logo2 = new QLabel(pg2);
        logo2->setObjectName("logo2");
        logo2->setGeometry(QRect(230, 80, 401, 281));
        logo2->setPixmap(QPixmap(QString::fromUtf8("../proj-im/frame4-3.png")));
        label_2 = new QLabel(pg2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 360, 231, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); "));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        pushButton_2 = new QPushButton(pg2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 360, 211, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        label_3 = new QLabel(pg2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 420, 141, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); "));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        label_4 = new QLabel(pg2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 420, 141, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); "));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        prof_button = new QPushButton(pg2);
        prof_button->setObjectName("prof_button");
        prof_button->setGeometry(QRect(240, 420, 121, 41));
        prof_button->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        student_button = new QPushButton(pg2);
        student_button->setObjectName("student_button");
        student_button->setGeometry(QRect(470, 420, 121, 41));
        student_button->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        stackedWidget->addWidget(pg2);
        pg3 = new QWidget();
        pg3->setObjectName("pg3");
        label = new QLabel(pg3);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 110, 201, 41));
        label->setStyleSheet(QString::fromUtf8("font: italic 30pt \"Times New Roman\";"));
        label_5 = new QLabel(pg3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 160, 101, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        label_6 = new QLabel(pg3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 210, 101, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        prof_user = new QLineEdit(pg3);
        prof_user->setObjectName("prof_user");
        prof_user->setGeometry(QRect(350, 160, 251, 41));
        prof_user->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        prof_pass = new QLineEdit(pg3);
        prof_pass->setObjectName("prof_pass");
        prof_pass->setGeometry(QRect(350, 210, 251, 41));
        prof_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 19pt \"Times New Roman\";"));
        prof_pass->setEchoMode(QLineEdit::Password);
        label_10 = new QLabel(pg3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(300, 270, 131, 41));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); "));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        prof_login = new QPushButton(pg3);
        prof_login->setObjectName("prof_login");
        prof_login->setGeometry(QRect(310, 270, 111, 41));
        prof_login->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        prof_logo = new QLabel(pg3);
        prof_logo->setObjectName("prof_logo");
        prof_logo->setGeometry(QRect(630, 110, 101, 181));
        prof_logo->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90)\n"
""));
        prof_logo->setPixmap(QPixmap(QString::fromUtf8("../proj-im/logo22XS.png")));
        stackedWidget->addWidget(pg3);
        pg4 = new QWidget();
        pg4->setObjectName("pg4");
        label_7 = new QLabel(pg4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 110, 201, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: italic 30pt \"Times New Roman\";"));
        label_8 = new QLabel(pg4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(240, 160, 101, 41));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        label_9 = new QLabel(pg4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(240, 210, 101, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        stu_user = new QLineEdit(pg4);
        stu_user->setObjectName("stu_user");
        stu_user->setGeometry(QRect(350, 160, 251, 41));
        stu_user->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 18pt \"Times New Roman\";"));
        stu_pass = new QLineEdit(pg4);
        stu_pass->setObjectName("stu_pass");
        stu_pass->setGeometry(QRect(350, 210, 251, 41));
        stu_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); \n"
"font: 19pt \"Times New Roman\";"));
        stu_pass->setEchoMode(QLineEdit::Password);
        label_11 = new QLabel(pg4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 270, 131, 41));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 58, 43); "));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/frame4.png")));
        stu_login = new QPushButton(pg4);
        stu_login->setObjectName("stu_login");
        stu_login->setGeometry(QRect(310, 270, 111, 41));
        stu_login->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        stu_logo = new QLabel(pg4);
        stu_logo->setObjectName("stu_logo");
        stu_logo->setGeometry(QRect(630, 110, 101, 181));
        stu_logo->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90)\n"
""));
        stu_logo->setPixmap(QPixmap(QString::fromUtf8("../proj-im/logo22XS.png")));
        stackedWidget->addWidget(pg4);
        pg5 = new QWidget();
        pg5->setObjectName("pg5");
        scrollArea = new QScrollArea(pg5);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 0, 800, 551));
        scrollArea->setMinimumSize(QSize(800, 0));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);\n"
"\n"
""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frame_5 = new QFrame(scrollAreaWidgetContents_6);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(1000, 1200));
        frame_5->setStyleSheet(QString::fromUtf8("bbackground-color:rgb(13, 107, 90);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 10, 731, 61));
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_25 = new QLabel(frame_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(20, 80, 731, 1200));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_26 = new QLabel(frame_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(240, 270, 271, 81));
        label_26->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(44, 98, 109);\n"
"font: 14pt \"Times New Roman\";"));
        createQuizButton = new QPushButton(frame_5);
        createQuizButton->setObjectName("createQuizButton");
        createQuizButton->setGeometry(QRect(580, 90, 161, 41));
        createQuizButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));

        verticalLayout_6->addWidget(frame_5);

        scrollArea->setWidget(scrollAreaWidgetContents_6);
        stackedWidget->addWidget(pg5);
        pg6 = new QWidget();
        pg6->setObjectName("pg6");
        scrollArea_4 = new QScrollArea(pg6);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setGeometry(QRect(30, 0, 800, 600));
        scrollArea_4->setMinimumSize(QSize(800, 0));
        scrollArea_4->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);\n"
"\n"
""));
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_13 = new QWidget();
        scrollAreaWidgetContents_13->setObjectName("scrollAreaWidgetContents_13");
        scrollAreaWidgetContents_13->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_13);
        verticalLayout_13->setObjectName("verticalLayout_13");
        frame_6 = new QFrame(scrollAreaWidgetContents_13);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(1000, 1200));
        frame_6->setStyleSheet(QString::fromUtf8("bbackground-color:rgb(13, 107, 90);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_60 = new QLabel(frame_6);
        label_60->setObjectName("label_60");
        label_60->setGeometry(QRect(20, 10, 731, 61));
        label_60->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_61 = new QLabel(frame_6);
        label_61->setObjectName("label_61");
        label_61->setGeometry(QRect(20, 90, 731, 1200));
        label_61->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_62 = new QLabel(frame_6);
        label_62->setObjectName("label_62");
        label_62->setGeometry(QRect(30, 100, 231, 31));
        label_62->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(44, 98, 109);\n"
"font: 14pt \"Times New Roman\";"));
        createQuiz_5 = new QPushButton(frame_6);
        createQuiz_5->setObjectName("createQuiz_5");
        createQuiz_5->setGeometry(QRect(550, 100, 191, 41));
        createQuiz_5->setStyleSheet(QString::fromUtf8("font: italic 16pt \"TImes New Roman\";"));
        label_68 = new QLabel(frame_6);
        label_68->setObjectName("label_68");
        label_68->setGeometry(QRect(30, 160, 711, 131));
        label_68->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 114, 121);\n"
"font: 18pt \"Times New Roman\";"));

        verticalLayout_13->addWidget(frame_6);

        scrollArea_4->setWidget(scrollAreaWidgetContents_13);
        stackedWidget->addWidget(pg6);
        pg7 = new QWidget();
        pg7->setObjectName("pg7");
        createQuizScroll = new QScrollArea(pg7);
        createQuizScroll->setObjectName("createQuizScroll");
        createQuizScroll->setGeometry(QRect(30, 0, 801, 571));
        createQuizScroll->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);"));
        createQuizScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        createQuizScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        createQuizScroll->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        createQuizScroll->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        quizPageBackground = new QFrame(scrollAreaWidgetContents_7);
        quizPageBackground->setObjectName("quizPageBackground");
        quizPageBackground->setEnabled(true);
        quizPageBackground->setMinimumSize(QSize(1000, 1200));
        quizPageBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90);"));
        quizPageBackground->setFrameShape(QFrame::StyledPanel);
        quizPageBackground->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(quizPageBackground);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 20, 731, 61));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 20pt \"Times New Roman\";"));
        label_28 = new QLabel(quizPageBackground);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(20, 110, 731, 421));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_29 = new QLabel(quizPageBackground);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(300, 170, 161, 81));
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 15pt \"Times New Roman\";"));
        uploadFile = new QPushButton(quizPageBackground);
        uploadFile->setObjectName("uploadFile");
        uploadFile->setGeometry(QRect(300, 220, 171, 101));
        goHomeButton = new QPushButton(quizPageBackground);
        goHomeButton->setObjectName("goHomeButton");
        goHomeButton->setGeometry(QRect(30, 30, 100, 32));

        verticalLayout_7->addWidget(quizPageBackground);

        createQuizScroll->setWidget(scrollAreaWidgetContents_7);
        stackedWidget->addWidget(pg7);
        pg8 = new QWidget();
        pg8->setObjectName("pg8");
        loading_label = new QLabel(pg8);
        loading_label->setObjectName("loading_label");
        loading_label->setGeometry(QRect(220, 80, 441, 311));
        loading_label->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90)\n"
""));
        loading_label->setPixmap(QPixmap(QString::fromUtf8("../proj-im/loading.png")));
        label_31 = new QLabel(pg8);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(350, 380, 151, 61));
        label_31->setStyleSheet(QString::fromUtf8("font: 15pt \"times new roman\""));
        stackedWidget->addWidget(pg8);
        pg9 = new QWidget();
        pg9->setObjectName("pg9");
        scrollArea_5 = new QScrollArea(pg9);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setGeometry(QRect(30, 0, 800, 600));
        scrollArea_5->setMinimumSize(QSize(800, 0));
        scrollArea_5->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);\n"
"\n"
""));
        scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_5->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_14 = new QWidget();
        scrollAreaWidgetContents_14->setObjectName("scrollAreaWidgetContents_14");
        scrollAreaWidgetContents_14->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_14 = new QVBoxLayout(scrollAreaWidgetContents_14);
        verticalLayout_14->setObjectName("verticalLayout_14");
        frame_7 = new QFrame(scrollAreaWidgetContents_14);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(1000, 1200));
        frame_7->setStyleSheet(QString::fromUtf8("bbackground-color:rgb(13, 107, 90);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_63 = new QLabel(frame_7);
        label_63->setObjectName("label_63");
        label_63->setGeometry(QRect(20, 10, 731, 61));
        label_63->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_64 = new QLabel(frame_7);
        label_64->setObjectName("label_64");
        label_64->setGeometry(QRect(20, 90, 731, 1200));
        label_64->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        label_65 = new QLabel(frame_7);
        label_65->setObjectName("label_65");
        label_65->setGeometry(QRect(30, 100, 231, 31));
        label_65->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(44, 98, 109);\n"
"font: 14pt \"Times New Roman\";"));
        label_66 = new QLabel(frame_7);
        label_66->setObjectName("label_66");
        label_66->setGeometry(QRect(30, 170, 711, 131));
        label_66->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 114, 121);\n"
"font: 18pt \"Times New Roman\";"));
        createQuiz_6 = new QPushButton(frame_7);
        createQuiz_6->setObjectName("createQuiz_6");
        createQuiz_6->setGeometry(QRect(540, 210, 191, 41));
        createQuiz_6->setStyleSheet(QString::fromUtf8("font: italic 16pt \"TImes New Roman\";"));
        label_67 = new QLabel(frame_7);
        label_67->setObjectName("label_67");
        label_67->setGeometry(QRect(30, 320, 711, 131));
        label_67->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 114, 121);\n"
"font: 18pt \"Times New Roman\";"));
        createQuiz_7 = new QPushButton(frame_7);
        createQuiz_7->setObjectName("createQuiz_7");
        createQuiz_7->setGeometry(QRect(540, 360, 191, 41));
        createQuiz_7->setStyleSheet(QString::fromUtf8("font: italic 16pt \"TImes New Roman\";"));

        verticalLayout_14->addWidget(frame_7);

        scrollArea_5->setWidget(scrollAreaWidgetContents_14);
        stackedWidget->addWidget(pg9);
        pg10 = new QWidget();
        pg10->setObjectName("pg10");
        createQuizScroll_4 = new QScrollArea(pg10);
        createQuizScroll_4->setObjectName("createQuizScroll_4");
        createQuizScroll_4->setGeometry(QRect(30, 0, 801, 571));
        createQuizScroll_4->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);"));
        createQuizScroll_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        createQuizScroll_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        createQuizScroll_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        createQuizScroll_4->setWidgetResizable(true);
        scrollAreaWidgetContents_16 = new QWidget();
        scrollAreaWidgetContents_16->setObjectName("scrollAreaWidgetContents_16");
        scrollAreaWidgetContents_16->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_16);
        verticalLayout_10->setObjectName("verticalLayout_10");
        quizPageBackground_4 = new QFrame(scrollAreaWidgetContents_16);
        quizPageBackground_4->setObjectName("quizPageBackground_4");
        quizPageBackground_4->setEnabled(true);
        quizPageBackground_4->setMinimumSize(QSize(1000, 1200));
        quizPageBackground_4->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90);"));
        quizPageBackground_4->setFrameShape(QFrame::StyledPanel);
        quizPageBackground_4->setFrameShadow(QFrame::Raised);
        label_46 = new QLabel(quizPageBackground_4);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(20, 20, 731, 61));
        label_46->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 20pt \"Times New Roman\";"));
        label_47 = new QLabel(quizPageBackground_4);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(20, 110, 731, 421));
        label_47->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        questionObj_2 = new QGroupBox(quizPageBackground_4);
        questionObj_2->setObjectName("questionObj_2");
        questionObj_2->setGeometry(QRect(30, 120, 711, 381));
        questionObj_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        questionStr_2 = new QTextEdit(questionObj_2);
        questionStr_2->setObjectName("questionStr_2");
        questionStr_2->setGeometry(QRect(10, 30, 681, 31));
        stuAns_2 = new QGroupBox(questionObj_2);
        stuAns_2->setObjectName("stuAns_2");
        stuAns_2->setGeometry(QRect(20, 70, 681, 291));
        choiceA_2 = new QCheckBox(stuAns_2);
        choiceA_2->setObjectName("choiceA_2");
        choiceA_2->setGeometry(QRect(10, 10, 661, 20));
        choiceA_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceB_2 = new QCheckBox(stuAns_2);
        choiceB_2->setObjectName("choiceB_2");
        choiceB_2->setGeometry(QRect(10, 40, 661, 20));
        choiceB_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceD_2 = new QCheckBox(stuAns_2);
        choiceD_2->setObjectName("choiceD_2");
        choiceD_2->setGeometry(QRect(10, 120, 661, 20));
        choiceC_2 = new QCheckBox(stuAns_2);
        choiceC_2->setObjectName("choiceC_2");
        choiceC_2->setGeometry(QRect(10, 80, 661, 20));
        submitQues1_2 = new QPushButton(stuAns_2);
        submitQues1_2->setObjectName("submitQues1_2");
        submitQues1_2->setGeometry(QRect(530, 250, 141, 31));
        label_48 = new QLabel(stuAns_2);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(530, 230, 121, 16));

        verticalLayout_10->addWidget(quizPageBackground_4);

        createQuizScroll_4->setWidget(scrollAreaWidgetContents_16);
        stackedWidget->addWidget(pg10);
        pg11 = new QWidget();
        pg11->setObjectName("pg11");
        createQuizScroll_7 = new QScrollArea(pg11);
        createQuizScroll_7->setObjectName("createQuizScroll_7");
        createQuizScroll_7->setGeometry(QRect(30, 0, 801, 571));
        createQuizScroll_7->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);"));
        createQuizScroll_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        createQuizScroll_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        createQuizScroll_7->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        createQuizScroll_7->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName("scrollAreaWidgetContents_11");
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        quizPageBackground_8 = new QFrame(scrollAreaWidgetContents_11);
        quizPageBackground_8->setObjectName("quizPageBackground_8");
        quizPageBackground_8->setEnabled(true);
        quizPageBackground_8->setMinimumSize(QSize(1000, 1200));
        quizPageBackground_8->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90);"));
        quizPageBackground_8->setFrameShape(QFrame::StyledPanel);
        quizPageBackground_8->setFrameShadow(QFrame::Raised);
        label_49 = new QLabel(quizPageBackground_8);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(20, 20, 731, 61));
        label_49->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 20pt \"Times New Roman\";"));
        label_50 = new QLabel(quizPageBackground_8);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(20, 110, 731, 421));
        label_50->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        questionObj_6 = new QGroupBox(quizPageBackground_8);
        questionObj_6->setObjectName("questionObj_6");
        questionObj_6->setGeometry(QRect(30, 120, 711, 381));
        questionObj_6->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        questionStr_6 = new QTextEdit(questionObj_6);
        questionStr_6->setObjectName("questionStr_6");
        questionStr_6->setGeometry(QRect(10, 30, 691, 51));
        questionStr_6->setStyleSheet(QString::fromUtf8("font: 6pt \"Times New Roman\";"));
        stuAns_6 = new QGroupBox(questionObj_6);
        stuAns_6->setObjectName("stuAns_6");
        stuAns_6->setGeometry(QRect(10, 90, 691, 281));
        choiceA_6 = new QCheckBox(stuAns_6);
        choiceA_6->setObjectName("choiceA_6");
        choiceA_6->setGeometry(QRect(10, 10, 661, 20));
        choiceA_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceB_6 = new QCheckBox(stuAns_6);
        choiceB_6->setObjectName("choiceB_6");
        choiceB_6->setGeometry(QRect(10, 40, 661, 20));
        choiceB_6->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceD_6 = new QCheckBox(stuAns_6);
        choiceD_6->setObjectName("choiceD_6");
        choiceD_6->setGeometry(QRect(10, 120, 661, 20));
        choiceC_6 = new QCheckBox(stuAns_6);
        choiceC_6->setObjectName("choiceC_6");
        choiceC_6->setGeometry(QRect(10, 80, 661, 20));
        submitQues1_6 = new QPushButton(stuAns_6);
        submitQues1_6->setObjectName("submitQues1_6");
        submitQues1_6->setGeometry(QRect(530, 230, 141, 31));
        label_51 = new QLabel(stuAns_6);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(540, 210, 121, 16));

        verticalLayout_11->addWidget(quizPageBackground_8);

        createQuizScroll_7->setWidget(scrollAreaWidgetContents_11);
        stackedWidget->addWidget(pg11);
        pg12 = new QWidget();
        pg12->setObjectName("pg12");
        createQuizScroll_8 = new QScrollArea(pg12);
        createQuizScroll_8->setObjectName("createQuizScroll_8");
        createQuizScroll_8->setGeometry(QRect(30, 0, 801, 571));
        createQuizScroll_8->setStyleSheet(QString::fromUtf8("background-color:rgb(13, 107, 90);"));
        createQuizScroll_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        createQuizScroll_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        createQuizScroll_8->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        createQuizScroll_8->setWidgetResizable(true);
        scrollAreaWidgetContents_12 = new QWidget();
        scrollAreaWidgetContents_12->setObjectName("scrollAreaWidgetContents_12");
        scrollAreaWidgetContents_12->setGeometry(QRect(0, 0, 1024, 1224));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_12);
        verticalLayout_12->setObjectName("verticalLayout_12");
        quizPageBackground_9 = new QFrame(scrollAreaWidgetContents_12);
        quizPageBackground_9->setObjectName("quizPageBackground_9");
        quizPageBackground_9->setEnabled(true);
        quizPageBackground_9->setMinimumSize(QSize(1000, 1200));
        quizPageBackground_9->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 107, 90);"));
        quizPageBackground_9->setFrameShape(QFrame::StyledPanel);
        quizPageBackground_9->setFrameShadow(QFrame::Raised);
        label_52 = new QLabel(quizPageBackground_9);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(20, 20, 731, 61));
        label_52->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 20pt \"Times New Roman\";"));
        label_53 = new QLabel(quizPageBackground_9);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(20, 110, 731, 421));
        label_53->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 98, 109);\n"
"font: 18pt \"Times New Roman\";"));
        questionObj_7 = new QGroupBox(quizPageBackground_9);
        questionObj_7->setObjectName("questionObj_7");
        questionObj_7->setGeometry(QRect(30, 120, 711, 401));
        questionObj_7->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        questionStr_7 = new QTextEdit(questionObj_7);
        questionStr_7->setObjectName("questionStr_7");
        questionStr_7->setGeometry(QRect(10, 30, 681, 61));
        stuAns_7 = new QGroupBox(questionObj_7);
        stuAns_7->setObjectName("stuAns_7");
        stuAns_7->setGeometry(QRect(20, 110, 681, 251));
        choiceA_7 = new QCheckBox(stuAns_7);
        choiceA_7->setObjectName("choiceA_7");
        choiceA_7->setGeometry(QRect(10, 10, 661, 20));
        choiceA_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceB_7 = new QCheckBox(stuAns_7);
        choiceB_7->setObjectName("choiceB_7");
        choiceB_7->setGeometry(QRect(10, 40, 661, 20));
        choiceB_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        choiceD_7 = new QCheckBox(stuAns_7);
        choiceD_7->setObjectName("choiceD_7");
        choiceD_7->setGeometry(QRect(10, 120, 661, 20));
        choiceC_7 = new QCheckBox(stuAns_7);
        choiceC_7->setObjectName("choiceC_7");
        choiceC_7->setGeometry(QRect(10, 80, 661, 20));
        submitQues1_7 = new QPushButton(stuAns_7);
        submitQues1_7->setObjectName("submitQues1_7");
        submitQues1_7->setGeometry(QRect(530, 250, 141, 31));
        label_54 = new QLabel(stuAns_7);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(540, 190, 121, 16));
        submitQues1_8 = new QPushButton(stuAns_7);
        submitQues1_8->setObjectName("submitQues1_8");
        submitQues1_8->setGeometry(QRect(520, 210, 141, 31));

        verticalLayout_12->addWidget(quizPageBackground_9);

        createQuizScroll_8->setWidget(scrollAreaWidgetContents_12);
        stackedWidget->addWidget(pg12);
        pg13 = new QWidget();
        pg13->setObjectName("pg13");
        label_161 = new QLabel(pg13);
        label_161->setObjectName("label_161");
        label_161->setGeometry(QRect(290, 170, 281, 191));
        label_161->setStyleSheet(QString::fromUtf8("\n"
"font: 18pt \"Times New Roman\";"));
        stackedWidget->addWidget(pg13);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        firstPgLogo->setText(QString());
        beginButton->setText(QCoreApplication::translate("MainWindow", "Begin", nullptr));
        logo2->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Are you a professor or student?", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        prof_button->setText(QCoreApplication::translate("MainWindow", "Professor", nullptr));
        student_button->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hello Professor!", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        prof_user->setText(QString());
        prof_pass->setText(QString());
        label_10->setText(QString());
        prof_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        prof_logo->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Hello Student!", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        stu_user->setText(QString());
        stu_pass->setText(QString());
        label_11->setText(QString());
        stu_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        stu_logo->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Welcome to QuizBuddy!", nullptr));
        label_25->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "Your currently have no quizzes created. ", nullptr));
        createQuizButton->setText(QCoreApplication::translate("MainWindow", "(+) Create Quiz", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "Welcome to QuizBuddy!", nullptr));
        label_61->setText(QString());
        label_62->setText(QCoreApplication::translate("MainWindow", "Your currently have (1) quiz(s) created. ", nullptr));
        createQuiz_5->setText(QCoreApplication::translate("MainWindow", "+ Create Quiz", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "Quiz 1: The Methods of Chemistry ", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "                                             Let QuizBuddy do the work!  :)", nullptr));
        label_28->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindow", "please upload your .txt file", nullptr));
        uploadFile->setText(QCoreApplication::translate("MainWindow", "+upload file", nullptr));
        goHomeButton->setText(QCoreApplication::translate("MainWindow", "Go Home Page", nullptr));
        loading_label->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "Your quiz is being made!", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "Welcome to QuizBuddy!", nullptr));
        label_64->setText(QString());
        label_65->setText(QCoreApplication::translate("MainWindow", "Your currently have (2) due. ", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "Quiz 1: The Methods of Chemistry ", nullptr));
        createQuiz_6->setText(QCoreApplication::translate("MainWindow", "+ Take Quiz", nullptr));
        label_67->setText(QCoreApplication::translate("MainWindow", "Quiz 2: The Theorems of Chemistry", nullptr));
        createQuiz_7->setText(QCoreApplication::translate("MainWindow", "+ Take Quiz", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "You got this! :)", nullptr));
        label_47->setText(QString());
        questionObj_2->setTitle(QCoreApplication::translate("MainWindow", "Question 1: ", nullptr));
        questionStr_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Which of the following statements regarding the equilibrium constant is NOT true?</p></body></html>", nullptr));
        stuAns_2->setTitle(QString());
        choiceA_2->setText(QCoreApplication::translate("MainWindow", "When K >> 1, the concentration of products is much greater than the concentrations of reactants at equilibrium.", nullptr));
        choiceB_2->setText(QCoreApplication::translate("MainWindow", "When K << 1, the concentration of reactants is much greater than the concentrations of products at equilibrium.", nullptr));
        choiceD_2->setText(QCoreApplication::translate("MainWindow", "When K = 1, the forward and reverse rate constants are always equal.", nullptr));
        choiceC_2->setText(QCoreApplication::translate("MainWindow", "When K = 1, the concentration of products and reactants at equilibrium are always equal.", nullptr));
        submitQues1_2->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "graded as you go!", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "You got this! :)", nullptr));
        label_50->setText(QString());
        questionObj_6->setTitle(QCoreApplication::translate("MainWindow", "Question 2: ", nullptr));
        questionStr_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:6pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13pt;\">Consider the equilibrium, Cl2(g) + 2 NO(g) produces 2 NOCl(g). When 2.000 M NOCl is placed in a tank at 500.0 K and allowed to come to equilibrium, the equilibrium concentration of Cl2 is 0.979 M. Calculate Kc.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px; font-size:13pt;\"><br /></p></body></html>", nullptr));
        stuAns_6->setTitle(QString());
        choiceA_6->setText(QCoreApplication::translate("MainWindow", "45.6", nullptr));
        choiceB_6->setText(QCoreApplication::translate("MainWindow", "15.2", nullptr));
        choiceD_6->setText(QCoreApplication::translate("MainWindow", "0.000470", nullptr));
        choiceC_6->setText(QCoreApplication::translate("MainWindow", "2130", nullptr));
        submitQues1_6->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "graded as you go!", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "You got this! :)", nullptr));
        label_53->setText(QString());
        questionObj_7->setTitle(QCoreApplication::translate("MainWindow", "Question 3: ", nullptr));
        questionStr_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For the chemical equilibrium aA + bB  cC, the value of the equilibrium constant K is 10. What is the value of the equilibrium constant for the reaction 2cC  2aA + 2bB?</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        stuAns_7->setTitle(QString());
        choiceA_7->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        choiceB_7->setText(QCoreApplication::translate("MainWindow", "0.2", nullptr));
        choiceD_7->setText(QCoreApplication::translate("MainWindow", "0.01", nullptr));
        choiceC_7->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        submitQues1_7->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "graded as you go!", nullptr));
        submitQues1_8->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_161->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Your Quiz is Completed! Great Work!<br/></p><p>Instructor has hidden grades. </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
