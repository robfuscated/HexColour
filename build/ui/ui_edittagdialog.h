/********************************************************************************
** Form generated from reading UI file 'edittagdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTAGDIALOG_H
#define UI_EDITTAGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditTagDialog
{
public:
    QLineEdit *nameEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *offsetEdit;
    QLabel *label_4;
    QLineEdit *lengthEdit;
    QLabel *label_5;
    QComboBox *typeCombo;
    QPushButton *applyButton;
    QPushButton *colorButton;

    void setupUi(QDialog *EditTagDialog)
    {
        if (EditTagDialog->objectName().isEmpty())
            EditTagDialog->setObjectName(QString::fromUtf8("EditTagDialog"));
        EditTagDialog->resize(400, 200);
        EditTagDialog->setMinimumSize(QSize(400, 200));
        EditTagDialog->setMaximumSize(QSize(400, 200));
        EditTagDialog->setSizeGripEnabled(true);
        EditTagDialog->setModal(true);
        nameEdit = new QLineEdit(EditTagDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(110, 50, 141, 25));
        label = new QLabel(EditTagDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 91, 20));
        label_2 = new QLabel(EditTagDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 91, 20));
        label_3 = new QLabel(EditTagDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 91, 20));
        offsetEdit = new QLineEdit(EditTagDialog);
        offsetEdit->setObjectName(QString::fromUtf8("offsetEdit"));
        offsetEdit->setGeometry(QRect(110, 90, 141, 25));
        label_4 = new QLabel(EditTagDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 130, 91, 20));
        lengthEdit = new QLineEdit(EditTagDialog);
        lengthEdit->setObjectName(QString::fromUtf8("lengthEdit"));
        lengthEdit->setGeometry(QRect(110, 130, 141, 25));
        label_5 = new QLabel(EditTagDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 91, 20));
        typeCombo = new QComboBox(EditTagDialog);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));
        typeCombo->setGeometry(QRect(110, 170, 141, 25));
        applyButton = new QPushButton(EditTagDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(290, 10, 93, 29));
        colorButton = new QPushButton(EditTagDialog);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(110, 10, 141, 29));

        retranslateUi(EditTagDialog);

        QMetaObject::connectSlotsByName(EditTagDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTagDialog)
    {
        EditTagDialog->setWindowTitle(QCoreApplication::translate("EditTagDialog", "Edit Tag", nullptr));
        label->setText(QCoreApplication::translate("EditTagDialog", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("EditTagDialog", "Color:", nullptr));
        label_3->setText(QCoreApplication::translate("EditTagDialog", "Offset:", nullptr));
        offsetEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("EditTagDialog", "Length:", nullptr));
        lengthEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("EditTagDialog", "Type:", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("EditTagDialog", "String", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("EditTagDialog", "BigEndian", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("EditTagDialog", "LittleEndian", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("EditTagDialog", "HEX", nullptr));

        applyButton->setText(QCoreApplication::translate("EditTagDialog", "Apply", nullptr));
        colorButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditTagDialog: public Ui_EditTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTAGDIALOG_H
