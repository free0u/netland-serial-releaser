#include "serials_releaser.h"


serials_releaser::serials_releaser(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	set_serials_list();

	// copy code to clipboard
	QObject::connect(ui.pushButton_copycode, SIGNAL(clicked()), this, SLOT(copy_code()));

	// add serial
	QObject::connect(ui.pushButton_addserial, SIGNAL(clicked()), this, SLOT(add_serial()));

	// updating code
	foreach (serial_item* item, serial_items) {
		QObject::connect(item->ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(update_code()));
		QObject::connect(item->ui.spinBox_episode, SIGNAL(valueChanged(int)), this, SLOT(update_code()));
		QObject::connect(item->ui.spinBox_season, SIGNAL(valueChanged(int)), this, SLOT(update_code()));

		QObject::connect(item->ui.lineEdit_sub, SIGNAL(textChanged(const QString &)), this, SLOT(update_code()));
		QObject::connect(item->ui.lineEdit_video, SIGNAL(textChanged(const QString &)), this, SLOT(update_code()));
	}
}

void serials_releaser::set_serials_list() {
	xml_editor xe("serials.xml");

	QVector<serial_info> serials = xe.load_data();

	QVBoxLayout * lay = new QVBoxLayout();
	serial_items.clear();
	foreach(serial_info serial, serials) {
		serial_item * it = new serial_item();
		it->ui.label_serial_title->setText(serial.title);
		it->ui.spinBox_season->setValue(serial.season);
		it->ui.spinBox_episode->setValue(serial.episode);
		
		serial_items.push_back(it);
		it->change_enabled_form();
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
		res.push_back(serial_info(title, magnet_video, magnet_sub, season_num, episode_num));
	}

	return res;
}

QString serials_releaser::get_serial_code() {
	QVector<serial_info> info = get_serial_info(true);

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


// slots
void serials_releaser::copy_code() {
	QClipboard * clip = QApplication::clipboard();
	clip->setText(ui.plainTextEdit->toPlainText());
}

void serials_releaser::add_serial() {
	QVector<serial_info> res = get_serial_info(false);
	QString title;
	int episode, season;
	title = ui.lineEdit_title->text();
	season = ui.lineEdit_season->text().toInt();
	episode = ui.lineEdit_episode->text().toInt();

	res.push_back(serial_info(title, season, episode));

	// save to xml
	xml_editor xe("serials.xml");
	xe.save_data(res);

	// update serial list
	set_serials_list();
}

void serials_releaser::update_code() {
	ui.plainTextEdit->setPlainText(get_serial_code());

	// save to xml
	xml_editor xe("serials.xml");
	xe.save_data(get_serial_info(false));
}

