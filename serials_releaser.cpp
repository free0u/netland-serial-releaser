#include "serials_releaser.h"
#include "serial_item.h"
#include "xml_editor.h"


#include <qdebug.h>

serials_releaser::serials_releaser(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	xml_editor xe("serials.xml");
	xe.test_save();

	QVBoxLayout * lay = new QVBoxLayout();
	for (int i = 0; i < 10; ++i) {
		QLabel * l = new QLabel();
		l->setText("item " + QString::number(i));
		
		serial_item * it = new serial_item();
		
		lay->addWidget(it);
	}
	QWidget * w = new QWidget();
	w->setLayout(lay);
	ui.scrollArea->setWidget(w);
}

serials_releaser::~serials_releaser()
{

}
