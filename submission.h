#ifndef SUBMISSION_H
#define SUBMISSION_H
#include <QString>
#include <QVector>
#include <QIODevice>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
class submission
{


    public:

        submission();
        void processFile(QString fname);
        //void displayData();
        //const std::vector<T>& createQuestionBank() const;


    public:

        QVector <QString> qBank;
        QVector <QString> choices;
        QVector <QString> answers;

};



#endif // SUBMISSION_H
