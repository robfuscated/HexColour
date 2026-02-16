/********************************************************************************
** Form generated from reading UI file 'hashdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASHDIALOG_H
#define UI_HASHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HashDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *md5Lbl;
    QLabel *sha1Lbl;
    QLabel *sha256Lbl;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HashDialog)
    {
        if (HashDialog->objectName().isEmpty())
            HashDialog->setObjectName("HashDialog");
        HashDialog->resize(800, 230);
        HashDialog->setMinimumSize(QSize(800, 230));
        HashDialog->setMaximumSize(QSize(800, 230));
        label = new QLabel(HashDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 61, 18));
        label_2 = new QLabel(HashDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 61, 18));
        label_3 = new QLabel(HashDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 110, 67, 18));
        md5Lbl = new QLabel(HashDialog);
        md5Lbl->setObjectName("md5Lbl");
        md5Lbl->setGeometry(QRect(110, 27, 681, 21));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        md5Lbl->setPalette(palette);
        md5Lbl->setAutoFillBackground(false);
        md5Lbl->setFrameShape(QFrame::Box);
        md5Lbl->setFrameShadow(QFrame::Sunken);
        md5Lbl->setLineWidth(1);
        md5Lbl->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        sha1Lbl = new QLabel(HashDialog);
        sha1Lbl->setObjectName("sha1Lbl");
        sha1Lbl->setGeometry(QRect(110, 67, 681, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        sha1Lbl->setPalette(palette1);
        sha1Lbl->setAutoFillBackground(false);
        sha1Lbl->setFrameShape(QFrame::Box);
        sha1Lbl->setFrameShadow(QFrame::Sunken);
        sha1Lbl->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        sha256Lbl = new QLabel(HashDialog);
        sha256Lbl->setObjectName("sha256Lbl");
        sha256Lbl->setGeometry(QRect(110, 107, 681, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        sha256Lbl->setPalette(palette2);
        sha256Lbl->setAutoFillBackground(false);
        sha256Lbl->setFrameShape(QFrame::Box);
        sha256Lbl->setFrameShadow(QFrame::Sunken);
        sha256Lbl->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        progressBar = new QProgressBar(HashDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(110, 140, 681, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(HashDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 180, 88, 26));
        pushButton_2 = new QPushButton(HashDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(700, 180, 88, 26));

        retranslateUi(HashDialog);

        QMetaObject::connectSlotsByName(HashDialog);
    } // setupUi

    void retranslateUi(QDialog *HashDialog)
    {
        HashDialog->setWindowTitle(QCoreApplication::translate("HashDialog", "HexWalk - Hash Calculator", nullptr));
        label->setText(QCoreApplication::translate("HashDialog", "MD5:", nullptr));
        label_2->setText(QCoreApplication::translate("HashDialog", "SHA1:", nullptr));
        label_3->setText(QCoreApplication::translate("HashDialog", "SHA256:", nullptr));
        md5Lbl->setText(QString());
        sha1Lbl->setText(QString());
        sha256Lbl->setText(QString());
        pushButton->setText(QCoreApplication::translate("HashDialog", "Stop", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HashDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HashDialog: public Ui_HashDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASHDIALOG_H
