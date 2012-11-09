#include "serial_item.h"

serial_item::serial_item(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// paste video link
	QObject::connect(ui.pasteButton_video, SIGNAL(clicked()), this, SLOT(paste_magnet_video()));

	// paste sub link
	QObject::connect(ui.pasteButton_sub, SIGNAL(clicked()), this, SLOT(paste_magnet_sub()));

	// checkbox and state enabled
	QObject::connect(ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(slot_change_enabled_form()));
}

serial_item::~serial_item()
{

}


void serial_item::paste_magnet_video() {
	QClipboard * clip = QApplication::clipboard();
	QString magnet_video = clip->text();
	ui.lineEdit_video->setText(magnet_video);
}

void serial_item::paste_magnet_sub() {
	QClipboard * clip = QApplication::clipboard();
	QString magnet_sub = clip->text();
	ui.lineEdit_sub->setText(magnet_sub);
}




void serial_item::change_enabled_form() {
	bool is_enabled;

	// edits
	is_enabled = ui.lineEdit_sub->isEnabled();
	ui.lineEdit_sub->setEnabled(!is_enabled);

	is_enabled = ui.lineEdit_video->isEnabled();
	ui.lineEdit_video->setEnabled(!is_enabled);

	// buttons
	is_enabled = ui.pasteButton_sub->isEnabled();
	ui.pasteButton_sub->setEnabled(!is_enabled);

	is_enabled = ui.pasteButton_video->isEnabled();
	ui.pasteButton_video->setEnabled(!is_enabled);

	// spins
	is_enabled = ui.spinBox_episode->isEnabled();
	ui.spinBox_episode->setEnabled(!is_enabled);

	is_enabled = ui.spinBox_season->isEnabled();
	ui.spinBox_season->setEnabled(!is_enabled);
}

void serial_item::slot_change_enabled_form() {
	change_enabled_form();
}