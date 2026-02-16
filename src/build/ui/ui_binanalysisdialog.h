/********************************************************************************
** Form generated from reading UI file 'binanalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINANALYSISDIALOG_H
#define UI_BINANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_binanalysisdialog
{
public:
    QTableView *binwalkTableView;
    QPushButton *extractAllBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *binanalysisdialog)
    {
        if (binanalysisdialog->objectName().isEmpty())
            binanalysisdialog->setObjectName(QString::fromUtf8("binanalysisdialog"));
        binanalysisdialog->resize(1024, 378);
        binanalysisdialog->setMinimumSize(QSize(1024, 0));
        binanalysisdialog->setMaximumSize(QSize(1024, 16777215));
        binwalkTableView = new QTableView(binanalysisdialog);
        binwalkTableView->setObjectName(QString::fromUtf8("binwalkTableView"));
        binwalkTableView->setGeometry(QRect(0, 10, 881, 361));
        extractAllBtn = new QPushButton(binanalysisdialog);
        extractAllBtn->setObjectName(QString::fromUtf8("extractAllBtn"));
        extractAllBtn->setGeometry(QRect(910, 10, 93, 29));
        closeBtn = new QPushButton(binanalysisdialog);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(910, 50, 93, 29));

        retranslateUi(binanalysisdialog);

        QMetaObject::connectSlotsByName(binanalysisdialog);
    } // setupUi

    void retranslateUi(QDialog *binanalysisdialog)
    {
        binanalysisdialog->setWindowTitle(QCoreApplication::translate("binanalysisdialog", "HexWalk - Binary Analysis", nullptr));
        extractAllBtn->setText(QCoreApplication::translate("binanalysisdialog", "Extract All", nullptr));
        closeBtn->setText(QCoreApplication::translate("binanalysisdialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class binanalysisdialog: public Ui_binanalysisdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINANALYSISDIALOG_H
