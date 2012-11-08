#pragma once

#include <qstring.h>

struct serial_info {
	QString title, magnet_video, magnet_sub;
	int season, episode;
	serial_info() {}
	serial_info(QString, QString, QString, int, int);
	serial_info(QString, int, int);
};

