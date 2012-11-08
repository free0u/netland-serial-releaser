/********************************************************************************
** Form generated from reading UI file 'serial_item.ui'
**
** Created: Fri 9. Nov 03:44:19 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_ITEM_H
#define UI_SERIAL_ITEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serial_item
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_sub;
    QPushButton *pasteButton_sub;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_video;
    QPushButton *pasteButton_video;
    QCheckBox *checkBox;
    QLabel *label_serial_title;
    QLabel *label_7;
    QSpinBox *spinBox_season;
    QSpinBox *spinBox_episode;
    QFrame *line;
    QLabel *label_8;

    void setupUi(QWidget *serial_item)
    {
        if (serial_item->objectName().isEmpty())
            serial_item->setObjectName(QString::fromUtf8("serial_item"));
        serial_item->setEnabled(true);
        serial_item->resize(397, 82);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_item->sizePolicy().hasHeightForWidth());
        serial_item->setSizePolicy(sizePolicy);
        serial_item->setMinimumSize(QSize(397, 82));
        horizontalLayoutWidget_2 = new QWidget(serial_item);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 391, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_sub = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_sub->setObjectName(QString::fromUtf8("lineEdit_sub"));

        horizontalLayout_2->addWidget(lineEdit_sub);

        pasteButton_sub = new QPushButton(horizontalLayoutWidget_2);
        pasteButton_sub->setObjectName(QString::fromUtf8("pasteButton_sub"));

        horizontalLayout_2->addWidget(pasteButton_sub);

        horizontalLayoutWidget = new QWidget(serial_item);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 391, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_video = new QLineEdit(horizontalLayoutWidget);
        lineEdit_video->setObjectName(QString::fromUtf8("lineEdit_video"));

        horizontalLayout->addWidget(lineEdit_video);

        pasteButton_video = new QPushButton(horizontalLayoutWidget);
        pasteButton_video->setObjectName(QString::fromUtf8("pasteButton_video"));

        horizontalLayout->addWidget(pasteButton_video);

        checkBox = new QCheckBox(serial_item);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(0, 0, 70, 17));
        label_serial_title = new QLabel(serial_item);
        label_serial_title->setObjectName(QString::fromUtf8("label_serial_title"));
        label_serial_title->setGeometry(QRect(20, 0, 63, 20));
        label_7 = new QLabel(serial_item);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 0, 86, 20));
        spinBox_season = new QSpinBox(serial_item);
        spinBox_season->setObjectName(QString::fromUtf8("spinBox_season"));
        spinBox_season->setGeometry(QRect(260, 0, 41, 20));
        spinBox_episode = new QSpinBox(serial_item);
        spinBox_episode->setObjectName(QString::fromUtf8("spinBox_episode"));
        spinBox_episode->setGeometry(QRect(350, 0, 41, 20));
        line = new QFrame(serial_item);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 391, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(serial_item);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 0, 41, 20));
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget->raise();
        checkBox->raise();
        label_serial_title->raise();
        label_7->raise();
        spinBox_season->raise();
        spinBox_episode->raise();
        line->raise();
        label_8->raise();
        label_5->raise();

        retranslateUi(serial_item);

        QMetaObject::connectSlotsByName(serial_item);
    } // setupUi

    void retranslateUi(QWidget *serial_item)
    {
        serial_item->setWindowTitle(QApplication::translate("serial_item", "serial_item", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("serial_item", "sub", 0, QApplication::UnicodeUTF8));
        pasteButton_sub->setText(QApplication::translate("serial_item", "paste", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("serial_item", "video", 0, QApplication::UnicodeUTF8));
        pasteButton_video->setText(QApplication::translate("serial_item", "paste", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        label_serial_title->setText(QApplication::translate("serial_item", "Dexter", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("serial_item", "season", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("serial_item", "episode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class serial_item: public Ui_serial_item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_ITEM_H
