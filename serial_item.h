#ifndef SERIAL_ITEM_H
#define SERIAL_ITEM_H

#include <QWidget>

#include "ui_serial_item.h"
class serial_item : public QWidget
{
	Q_OBJECT

public:
	serial_item(QWidget *parent = 0);
	~serial_item();

	friend class serials_releaser;
private:
	Ui::serial_item ui;
};

#endif // SERIAL_ITEM_H
