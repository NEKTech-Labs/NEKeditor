#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "nektech_doc_handler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<NEKTech_Doc_Handler>("NEKeditor", 1, 0, "NEKTech_Doc_Handler");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
