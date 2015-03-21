#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "documenthandler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<DocumentHandler>("org.qtproject.example", 1, 0, "DocumentHandler");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
