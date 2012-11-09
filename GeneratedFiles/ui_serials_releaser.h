/********************************************************************************
** Form generated from reading UI file 'serials_releaser.ui'
**
** Created: Fri 9. Nov 19:53:32 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALS_RELEASER_H
#define UI_SERIALS_RELEASER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serials_releaserClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_addserial;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_title;
    QLabel *label_2;
    QLineEdit *lineEdit_season;
    QLabel *label_3;
    QLineEdit *lineEdit_episode;
    QPushButton *pushButton_copycode;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serials_releaserClass)
    {
        if (serials_releaserClass->objectName().isEmpty())
            serials_releaserClass->setObjectName(QString::fromUtf8("serials_releaserClass"));
        serials_releaserClass->resize(570, 652);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serials_releaserClass->sizePolicy().hasHeightForWidth());
        serials_releaserClass->setSizePolicy(sizePolicy);
        serials_releaserClass->setMinimumSize(QSize(570, 652));
        serials_releaserClass->setMaximumSize(QSize(570, 652));
        centralWidget = new QWidget(serials_releaserClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_addserial = new QPushButton(centralWidget);
        pushButton_addserial->setObjectName(QString::fromUtf8("pushButton_addserial"));
        pushButton_addserial->setGeometry(QRect(450, 560, 91, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_addserial->sizePolicy().hasHeightForWidth());
        pushButton_addserial->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 540, 241, 74));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_title = new QLineEdit(layoutWidget);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_title);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_season = new QLineEdit(layoutWidget);
        lineEdit_season->setObjectName(QString::fromUtf8("lineEdit_season"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_season);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_episode = new QLineEdit(layoutWidget);
        lineEdit_episode->setObjectName(QString::fromUtf8("lineEdit_episode"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_episode);

        pushButton_copycode = new QPushButton(centralWidget);
        pushButton_copycode->setObjectName(QString::fromUtf8("pushButton_copycode"));
        pushButton_copycode->setGeometry(QRect(460, 410, 75, 23));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 541, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 269));
        scrollArea->setWidget(scrollAreaWidgetContents);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 300, 421, 231));
        serials_releaserClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(serials_releaserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        serials_releaserClass->setStatusBar(statusBar);

        retranslateUi(serials_releaserClass);

        QMetaObject::connectSlotsByName(serials_releaserClass);
    } // setupUi

    void retranslateUi(QMainWindow *serials_releaserClass)
    {
        serials_releaserClass->setWindowTitle(QApplication::translate("serials_releaserClass", "Netland serials releaser", 0, QApplication::UnicodeUTF8));
        pushButton_addserial->setText(QApplication::translate("serials_releaserClass", "Add serial", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("serials_releaserClass", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_title->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_title->setWhatsThis(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lineEdit_title->setPlaceholderText(QApplication::translate("serials_releaserClass", "Dexter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("serials_releaserClass", "Season", 0, QApplication::UnicodeUTF8));
        lineEdit_season->setText(QString());
        lineEdit_season->setPlaceholderText(QApplication::translate("serials_releaserClass", "7", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("serials_releaserClass", "Episode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_episode->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_episode->setPlaceholderText(QApplication::translate("serials_releaserClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_copycode->setText(QApplication::translate("serials_releaserClass", "Copy code", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class serials_releaserClass: public Ui_serials_releaserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALS_RELEASER_H
