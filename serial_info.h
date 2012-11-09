#pragma once

#include <qstring.h>

struct serial_info {
	QString title, magnet_video, magnet_sub;
	int season, episode;
	serial_info() {}
	serial_info(QString title, QString magnet_video, QString magnet_sub, int season, int episode);
	serial_info(QString title, int season, int episode);
};

