#ifndef SERIALS_RELEASER_H
#define SERIALS_RELEASER_H

#include "serial_item.h"
#include "xml_editor.h"
#include "serial_info.h"
#include "ui_serials_releaser.h"

#include <QtGui/QMainWindow>
#include <qclipboard.h>
#include <qgroupbox.h>
#include <qvector.h>


class serials_releaser : public QMainWindow
{
	Q_OBJECT

public:
	serials_releaser(QWidget *parent = 0, Qt::WFlags flags = 0);
	~serials_releaser();

	void set_serials_list();

	QVector<serial_info> get_serial_info(bool);

	QString get_serial_code();



private:
	Ui::serials_releaserClass ui;
	QVector<serial_item*> serial_items;

public slots:
	void copy_code();
	void add_serial();
	void update_code();
signals:

};

#endif // SERIALS_RELEASER_H
