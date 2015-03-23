#include "nektechio.h"
#include <QFile>
#include <QTextStream>


void nektechio::save(QString text)
{
    QFile file("text.c");


    if(file.open(QIODevice::ReadWrite)){
        QTextStream stream(&file);
        stream << text << endl;
        qDebug("inside c++");

    }

}
