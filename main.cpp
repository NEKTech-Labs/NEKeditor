#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "nektech_doc_handler.h"
#include "nektechio.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
       engine.rootContext()->setContextProperty("nektechio", new nektechio());
    qmlRegisterType<NEKTech_Doc_Handler>("NEKeditor", 1, 0, "NEKTech_Doc_Handler");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
