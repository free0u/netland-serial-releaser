#include "serial_info.h"


serial_info::serial_info(QString title, int season, int episode)
	: title(title), season(season), episode(episode)
{
}

serial_info::serial_info(QString title, QString magnet_video, QString magnet_sub, int season, int episode)
	: title(title), magnet_video(magnet_video), magnet_sub(magnet_sub), season(season), episode(episode)
{
}