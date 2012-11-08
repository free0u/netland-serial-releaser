#include "xml_editor.h"
#include <qdebug.h>

xml_editor::xml_editor(void)
{
}

xml_editor::xml_editor(QString name_file) : name_file(name_file)
{
}

xml_editor::~xml_editor(void)
{
}

QVector<serial_info> xml_editor::load_data() {
	QVector<serial_info> res;

	QString title;
	int season, episode;

	QDomDocument doc;
	QFile file(name_file);
	if (!file.open(QIODevice::ReadOnly))
		return res;
	if (!doc.setContent(&file)) {
		file.close();
		return res;
	}
	file.close();
	
	QDomElement docElem = doc.documentElement();

	for (QDomNode node = docElem.firstChild(); !node.isNull(); node = node.nextSibling()) {
		QDomElement serial = node.toElement();
		
		title = serial.firstChildElement("title").text();
		season = serial.firstChildElement("season").text().toInt();
		episode = serial.firstChildElement("episode").text().toInt();
		qDebug() << title << " " << season << " " << episode << endl;
		
		res.push_back(serial_info(title, season, episode));
	}
	return res;
}

void xml_editor::save_data(QVector<serial_info> const& data) {
	QDomDocument doc;
	QDomElement root = doc.createElement("serials");
    doc.appendChild(root);

	QDomText t;
	for (int i = 0; i < data.size(); ++i) {
		QDomElement serial = doc.createElement("serial");
		root.appendChild(serial);

		//title
		QDomElement title = doc.createElement("title");
		t = doc.createTextNode(data[i].title);
		title.appendChild(t);
		serial.appendChild(title);

		//season
		QDomElement season = doc.createElement("season");
		t = doc.createTextNode(QString::number(data[i].season));
		season.appendChild(t);
		serial.appendChild(season);

		//episode
		QDomElement episode = doc.createElement("episode");
		t = doc.createTextNode(QString::number(data[i].episode));
		episode.appendChild(t);
		serial.appendChild(episode);
	}

	QFile file(name_file);
    if(file.open(QIODevice::WriteOnly)) {
        QTextStream(&file) << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
        QTextStream(&file) << doc.toString();
        file.close();
    }
}

void xml_editor::test_save() {
	QVector<serial_info> a;
	a.push_back(serial_info("Dexter", 5, 6));
	a.push_back(serial_info("Misfits", 1, 4));
	
	QVector<serial_info> b(load_data());
	save_data(b);
}