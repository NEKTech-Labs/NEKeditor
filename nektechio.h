#ifndef NEKTECHIO_H
#define NEKTECHIO_H
#include <QObject>

class nektechio : public QObject
{


    Q_OBJECT

public:


    Q_INVOKABLE void save(QString text);
};

#endif // NEKTECHIO_H
