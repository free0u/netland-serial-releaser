#include "serials_releaser.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	serials_releaser w;
	w.show();
	return a.exec();
}
