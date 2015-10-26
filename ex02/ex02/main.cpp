
#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	qDebug()<<"Hello!";
	int aaaa;
	return a.exec();
}
