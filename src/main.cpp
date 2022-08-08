#include <QGuiApplication>
#include <QQmlApplicationEngine>


int
main(int argc, char** argv)
{
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    engine.load(url);

    return app.exec();
}

