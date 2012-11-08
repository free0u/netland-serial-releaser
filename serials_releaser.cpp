#include "serials_releaser.h"

serials_releaser::serials_releaser(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	set_serials_list();
}

void serials_releaser::set_serials_list() {
	xml_editor xe("serials.xml");

	QVector<serial_info> serials = xe.load_data();

	QVBoxLayout * lay = new QVBoxLayout();
	foreach(serial_info serial, serials) {
		//QLabel * l = new QLabel();
		//l->setText("item " + QString::number(i));
		
		serial_item * it = new serial_item();
		it->ui.label_serial_title->setText(serial.title);
		it->ui.spinBox_season->setValue(serial.season);
		it->ui.spinBox_episode->setValue(serial.episode);

		lay->addWidget(it);
	}
	QWidget * w = new QWidget();
	w->setLayout(lay);
	ui.scrollArea->setWidget(w);
}

serials_releaser::~serials_releaser()
{

}
