#include "submission.h"

submission::submission()
{

    qBank = QVector <QString>();
    choices = QVector <QString>();
    answers = QVector <QString>();

}


void submission::processFile(QString filesname)
{
    QFile file(filesname);
    //const QString filename =  filesname;

    if (!file.exists())
    {

        qCritical() << "File not found";
        qCritical() << file.errorString();

    }

    if (!file.open(QIODevice::ReadOnly))
    {

        qCritical() << "Could not open file";
        qCritical() << file.errorString();
        return;
    }

    QTextStream questionBank(&file);
    QString line;

    while (!questionBank.atEnd())
    {
        for(int i = 0; i < 1; i++)
        {
            line = questionBank.readLine();
            qBank.push_back(line);

        }

        for(int j = 0; j < 4; j++)
        {
            line = questionBank.readLine();
            choices.push_back(line);

        }

        for(int k = 0; k < 1; k++)
        {
            line = questionBank.readLine();
            answers.push_back(line);

        }

    }

    file.close();

}

