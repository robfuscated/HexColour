/********************************************************************************
** Form generated from reading UI file 'stringsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGSDIALOG_H
#define UI_STRINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StringsDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbFind;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cbFindFormat;
    QLabel *label;
    QSpinBox *spinBoxMinLen;
    QLabel *label_3;
    QSpinBox *spinBoxMaxLen;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gbOptions;
    QGridLayout *gridLayout;
    QCheckBox *cbUpper;
    QCheckBox *cbSymbols;
    QCheckBox *cbLower;
    QCheckBox *cbBegin;
    QCheckBox *cbNumbers;
    QCheckBox *cbSpaces;
    QGroupBox *gbResults;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblFind;
    QLineEdit *edtFind;
    QPushButton *btnNext;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbSearch;
    QPushButton *pbCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *StringsDialog)
    {
        if (StringsDialog->objectName().isEmpty())
            StringsDialog->setObjectName("StringsDialog");
        StringsDialog->resize(775, 550);
        horizontalLayout_3 = new QHBoxLayout(StringsDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gbFind = new QGroupBox(StringsDialog);
        gbFind->setObjectName("gbFind");
        horizontalLayout = new QHBoxLayout(gbFind);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(gbFind);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        cbFindFormat = new QComboBox(gbFind);
        cbFindFormat->addItem(QString());
        cbFindFormat->addItem(QString());
        cbFindFormat->setObjectName("cbFindFormat");

        horizontalLayout->addWidget(cbFindFormat);

        label = new QLabel(gbFind);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBoxMinLen = new QSpinBox(gbFind);
        spinBoxMinLen->setObjectName("spinBoxMinLen");
        spinBoxMinLen->setMinimum(3);
        spinBoxMinLen->setMaximum(100);
        spinBoxMinLen->setValue(5);

        horizontalLayout->addWidget(spinBoxMinLen);

        label_3 = new QLabel(gbFind);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        spinBoxMaxLen = new QSpinBox(gbFind);
        spinBoxMaxLen->setObjectName("spinBoxMaxLen");
        spinBoxMaxLen->setMinimum(3);
        spinBoxMaxLen->setMaximum(100);
        spinBoxMaxLen->setValue(32);

        horizontalLayout->addWidget(spinBoxMaxLen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(gbFind);

        gbOptions = new QGroupBox(StringsDialog);
        gbOptions->setObjectName("gbOptions");
        gridLayout = new QGridLayout(gbOptions);
        gridLayout->setObjectName("gridLayout");
        cbUpper = new QCheckBox(gbOptions);
        cbUpper->setObjectName("cbUpper");
        cbUpper->setChecked(true);

        gridLayout->addWidget(cbUpper, 3, 0, 1, 1);

        cbSymbols = new QCheckBox(gbOptions);
        cbSymbols->setObjectName("cbSymbols");

        gridLayout->addWidget(cbSymbols, 2, 1, 1, 1);

        cbLower = new QCheckBox(gbOptions);
        cbLower->setObjectName("cbLower");
        cbLower->setChecked(true);

        gridLayout->addWidget(cbLower, 2, 0, 1, 1);

        cbBegin = new QCheckBox(gbOptions);
        cbBegin->setObjectName("cbBegin");
        cbBegin->setChecked(true);

        gridLayout->addWidget(cbBegin, 1, 0, 1, 1);

        cbNumbers = new QCheckBox(gbOptions);
        cbNumbers->setObjectName("cbNumbers");
        cbNumbers->setChecked(true);

        gridLayout->addWidget(cbNumbers, 1, 1, 1, 1);

        cbSpaces = new QCheckBox(gbOptions);
        cbSpaces->setObjectName("cbSpaces");

        gridLayout->addWidget(cbSpaces, 3, 1, 1, 1);

        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowMinimumHeight(3, 1);

        verticalLayout_2->addWidget(gbOptions);

        gbResults = new QGroupBox(StringsDialog);
        gbResults->setObjectName("gbResults");
        verticalLayout_3 = new QVBoxLayout(gbResults);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblFind = new QLabel(gbResults);
        lblFind->setObjectName("lblFind");

        horizontalLayout_2->addWidget(lblFind);

        edtFind = new QLineEdit(gbResults);
        edtFind->setObjectName("edtFind");

        horizontalLayout_2->addWidget(edtFind);

        btnNext = new QPushButton(gbResults);
        btnNext->setObjectName("btnNext");

        horizontalLayout_2->addWidget(btnNext);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(gbResults);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_3->addWidget(tableWidget);


        verticalLayout_2->addWidget(gbResults);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 5);

        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbSearch = new QPushButton(StringsDialog);
        pbSearch->setObjectName("pbSearch");

        verticalLayout->addWidget(pbSearch);

        pbCancel = new QPushButton(StringsDialog);
        pbCancel->setObjectName("pbCancel");

        verticalLayout->addWidget(pbCancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(pbSearch, pbCancel);

        retranslateUi(StringsDialog);
        QObject::connect(pbCancel, &QPushButton::clicked, StringsDialog, qOverload<>(&QDialog::hide));

        pbSearch->setDefault(true);


        QMetaObject::connectSlotsByName(StringsDialog);
    } // setupUi

    void retranslateUi(QDialog *StringsDialog)
    {
        StringsDialog->setWindowTitle(QCoreApplication::translate("StringsDialog", "HexWalk - Strings search", nullptr));
        gbFind->setTitle(QCoreApplication::translate("StringsDialog", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("StringsDialog", "Type:", nullptr));
        cbFindFormat->setItemText(0, QCoreApplication::translate("StringsDialog", "UTF-8", nullptr));
        cbFindFormat->setItemText(1, QCoreApplication::translate("StringsDialog", "UTF-16", nullptr));

        label->setText(QCoreApplication::translate("StringsDialog", "Minimum length:", nullptr));
        label_3->setText(QCoreApplication::translate("StringsDialog", "Maximum length:", nullptr));
        gbOptions->setTitle(QCoreApplication::translate("StringsDialog", "Options", nullptr));
        cbUpper->setText(QCoreApplication::translate("StringsDialog", "Upper case [A-Z]", nullptr));
        cbSymbols->setText(QCoreApplication::translate("StringsDialog", "Symbols [!\"%-_?#]", nullptr));
        cbLower->setText(QCoreApplication::translate("StringsDialog", "Lower case [a-z]", nullptr));
        cbBegin->setText(QCoreApplication::translate("StringsDialog", "Start from beginning", nullptr));
        cbNumbers->setText(QCoreApplication::translate("StringsDialog", "Numbers[0-9]", nullptr));
        cbSpaces->setText(QCoreApplication::translate("StringsDialog", "Spaces", nullptr));
        gbResults->setTitle(QCoreApplication::translate("StringsDialog", "Results", nullptr));
        lblFind->setText(QCoreApplication::translate("StringsDialog", "Find:", nullptr));
        btnNext->setText(QCoreApplication::translate("StringsDialog", "Next", nullptr));
        pbSearch->setText(QCoreApplication::translate("StringsDialog", "&Search", nullptr));
#if QT_CONFIG(shortcut)
        pbSearch->setShortcut(QCoreApplication::translate("StringsDialog", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        pbCancel->setText(QCoreApplication::translate("StringsDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StringsDialog: public Ui_StringsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGSDIALOG_H
