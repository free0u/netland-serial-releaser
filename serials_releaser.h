#ifndef SERIALS_RELEASER_H
#define SERIALS_RELEASER_H

#include <QtGui/QMainWindow>
#include "ui_serials_releaser.h"

class serials_releaser : public QMainWindow
{
	Q_OBJECT

public:
	serials_releaser(QWidget *parent = 0, Qt::WFlags flags = 0);
	~serials_releaser();

private:
	Ui::serials_releaserClass ui;
};

#endif // SERIALS_RELEASER_H
