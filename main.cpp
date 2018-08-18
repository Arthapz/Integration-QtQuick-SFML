#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "SFMLOffscreen.hpp"
#include "SFMLImageProvider.hpp"

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

	QGuiApplication app(argc, argv);

	SFMLOffscreen offscreen;

	QQmlApplicationEngine engine;
	engine.addImageProvider(QLatin1String("sfml"), new SFMLImageProvider(offscreen));
	engine.load(QUrl(QStringLiteral("qrc:/main.qml")));



	if (engine.rootObjects().isEmpty())
		return -1;

	return app.exec();
}
