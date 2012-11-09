#ifndef SERIAL_ITEM_H
#define SERIAL_ITEM_H

#include <QWidget>
#include <qclipboard.h>

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
	void change_enabled_form();


public slots:
	void paste_magnet_video();
	void paste_magnet_sub();
	void slot_change_enabled_form();
};

#endif // SERIAL_ITEM_H
