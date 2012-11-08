/********************************************************************************
** Form generated from reading UI file 'serials_releaser.ui'
**
** Created: Thu 8. Nov 23:34:47 2012
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
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 560, 91, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 540, 241, 74));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 320, 421, 201));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 410, 75, 23));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 541, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 269));
        scrollArea->setWidget(scrollAreaWidgetContents);
        serials_releaserClass->setCentralWidget(centralWidget);
        pushButton->raise();
        pushButton->raise();
        plainTextEdit->raise();
        pushButton_2->raise();
        scrollArea->raise();
        statusBar = new QStatusBar(serials_releaserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        serials_releaserClass->setStatusBar(statusBar);

        retranslateUi(serials_releaserClass);

        QMetaObject::connectSlotsByName(serials_releaserClass);
    } // setupUi

    void retranslateUi(QMainWindow *serials_releaserClass)
    {
        serials_releaserClass->setWindowTitle(QApplication::translate("serials_releaserClass", "Netland serials releaser", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("serials_releaserClass", "Add serial", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("serials_releaserClass", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lineEdit->setPlaceholderText(QApplication::translate("serials_releaserClass", "Dexter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("serials_releaserClass", "Season", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("serials_releaserClass", "7", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("serials_releaserClass", "Episode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("serials_releaserClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_3->setPlaceholderText(QApplication::translate("serials_releaserClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("serials_releaserClass", "Copy code", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class serials_releaserClass: public Ui_serials_releaserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALS_RELEASER_H
