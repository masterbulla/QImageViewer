#ifndef SESSION_H
#define SESSION_H

#include <QDir>

class Session
{
public:
    Session(QString descriptor);

    QString GetCurrentFileName();
    QString GetImgDirectoryPath();
    QString GetName();
    QString GetDescriptor();

    void LoadFiles();
    void NextFile();
    void PreviousFile();

private:
    QDir imgDirectory;
    bool hasTextDirectory;
    QDir txtDirectory;
    QString name;
    QString currentFileName;
    QStringList fileNames;
    QStringList::iterator currentFileIt;
};

#endif // SESSION_H
