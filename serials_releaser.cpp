#include "serials_releaser.h"

serials_releaser::serials_releaser(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	set_serials_list();

	qDebug() << get_serial_code();
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
		
		serial_items.push_back(it);
		
		lay->addWidget(it);
	}
	QWidget * w = new QWidget();
	w->setLayout(lay);
	ui.scrollArea->setWidget(w);
}

QVector<serial_info> serials_releaser::get_serial_info(bool need_checked) {
	QString title, magnet_sub, magnet_video;
	int episode_num, season_num;
	
	QVector<serial_info> res;

	foreach (serial_item* item, serial_items) {
		if (need_checked && !item->ui.checkBox->isChecked()) {
			continue;
		}
		title = item->ui.label_serial_title->text();
		magnet_sub = item->ui.lineEdit_sub->text();
		magnet_video = item->ui.lineEdit_video->text();
		episode_num = item->ui.spinBox_episode->text().toInt();
		season_num = item->ui.spinBox_season->text().toInt();
		res.push_back(serial_info(title, magnet_video, magnet_sub, episode_num, season_num));
	}

	return res;
}

QString serials_releaser::get_serial_code() {
	QVector<serial_info> info = get_serial_info(false);

	QFile file("template.html");
	if (!file.open(QIODevice::ReadOnly)) {
		return "";
	}
	QTextStream in(&file);

	QString tpl;
	while (!in.atEnd()) {
		QString line = in.readLine();
		tpl.append(line + QString("\n"));
	}
	file.close();

	QString res;

	foreach(serial_info serial, info) {
		QString text(tpl);
		text.replace("{title}", serial.title);
		text.replace("{magnet_sub}", serial.magnet_sub);
		text.replace("{magnet_video}", serial.magnet_video);

		QString episode, season;
		if (serial.episode < 10) {
			episode = "0";
		}
		if (serial.season < 10) {
			season = "0";
		}
		episode += QString::number(serial.episode);
		season += QString::number(serial.season);

		text.replace("{episode_num}", episode);
		text.replace("{season_num}", season);

		res += text;
	}

	return res;
}

serials_releaser::~serials_releaser()
{

}
