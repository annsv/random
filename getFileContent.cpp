#include "getFileContent.h"

/*
 * It will iterate through all the lines in file and
 * put them in given vector
 */

FileContent::FileContent(QObject *parent) : QObject(parent)
{

}

QList<QString> FileContent::getFileContent()
{
    QFile file("TextFile1.txt");
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {

        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            if (!line.isNull())
            {
                m_people.append(line+"\n");
            }

        }

        file.close();

    }
    //qDebug() << m_people;
    return m_people;
   // emit modelChanged(); //emitting signal
}

QString FileContent::getRandomUser()
{
    srand (time(0));

    QString randomUser = m_people[rand() % m_people.size()];
    return randomUser;
}


