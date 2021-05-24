#ifndef GETFILECONTENT_H
#define GETFILECONTENT_H

#include <QString>
#include <QObject>
#include <QFile>
#include <QDebug>
#include<time.h>

class FileContent : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList m_people READ getFileContent NOTIFY modelChanged)
public:
    explicit FileContent(QObject *parent = nullptr);

    Q_INVOKABLE QStringList getFileContent();
    Q_INVOKABLE QString getRandomUser();

private:
    QFile file;
    QStringList m_people;
    QString randomUser;
signals:
signals:
    void modelChanged();
};

#endif // GETFILECONTENT_H
