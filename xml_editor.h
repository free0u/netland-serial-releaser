#pragma once

#include "serial_info.h"

#include <qstring.h>
#include <qvector.h>
#include <QtXml> 



class xml_editor
{
public:
	xml_editor(void);
	xml_editor(QString);
	~xml_editor(void);

	void test_save();

	QVector<serial_info> load_data();
	void save_data(QVector<serial_info> const&);
private:
	QString name_file;
};

