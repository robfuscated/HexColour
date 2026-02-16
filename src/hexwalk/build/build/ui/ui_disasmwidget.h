/********************************************************************************
** Form generated from reading UI file 'disasmwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISASMWIDGET_H
#define UI_DISASMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisasmWidget
{
public:
    QWidget *dockWidgetContents;
    QLabel *labelArch;
    QComboBox *comboEndian;
    QLineEdit *edtSelected;
    QLabel *lblSelected;
    QLineEdit *edtBaseAddr;
    QListWidget *lstDisasm;
    QComboBox *comboBox;
    QPushButton *btnDisasm;
    QLabel *labelEndian;
    QLabel *lblBaseAddr;

    void setupUi(QDockWidget *DisasmWidget)
    {
        if (DisasmWidget->objectName().isEmpty())
            DisasmWidget->setObjectName("DisasmWidget");
        DisasmWidget->resize(280, 550);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisasmWidget->sizePolicy().hasHeightForWidth());
        DisasmWidget->setSizePolicy(sizePolicy);
        DisasmWidget->setMinimumSize(QSize(280, 200));
        DisasmWidget->setMaximumSize(QSize(524284, 524287));
        DisasmWidget->setFloating(true);
        DisasmWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        labelArch = new QLabel(dockWidgetContents);
        labelArch->setObjectName("labelArch");
        labelArch->setGeometry(QRect(10, 100, 131, 29));
        comboEndian = new QComboBox(dockWidgetContents);
        comboEndian->addItem(QString());
        comboEndian->addItem(QString());
        comboEndian->setObjectName("comboEndian");
        comboEndian->setGeometry(QRect(80, 70, 111, 25));
        edtSelected = new QLineEdit(dockWidgetContents);
        edtSelected->setObjectName("edtSelected");
        edtSelected->setGeometry(QRect(130, 38, 141, 25));
        lblSelected = new QLabel(dockWidgetContents);
        lblSelected->setObjectName("lblSelected");
        lblSelected->setGeometry(QRect(10, 36, 131, 29));
        edtBaseAddr = new QLineEdit(dockWidgetContents);
        edtBaseAddr->setObjectName("edtBaseAddr");
        edtBaseAddr->setGeometry(QRect(130, 2, 141, 25));
        lstDisasm = new QListWidget(dockWidgetContents);
        lstDisasm->setObjectName("lstDisasm");
        lstDisasm->setGeometry(QRect(10, 130, 261, 371));
        sizePolicy.setHeightForWidth(lstDisasm->sizePolicy().hasHeightForWidth());
        lstDisasm->setSizePolicy(sizePolicy);
        lstDisasm->setMinimumSize(QSize(0, 10));
        QFont font;
        font.setPointSize(8);
        lstDisasm->setFont(font);
        lstDisasm->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        lstDisasm->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstDisasm->setProperty("showDropIndicator", QVariant(false));
        lstDisasm->setResizeMode(QListView::Adjust);
        comboBox = new QComboBox(dockWidgetContents);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 100, 111, 25));
        btnDisasm = new QPushButton(dockWidgetContents);
        btnDisasm->setObjectName("btnDisasm");
        btnDisasm->setGeometry(QRect(200, 70, 71, 51));
        labelEndian = new QLabel(dockWidgetContents);
        labelEndian->setObjectName("labelEndian");
        labelEndian->setGeometry(QRect(10, 70, 131, 29));
        lblBaseAddr = new QLabel(dockWidgetContents);
        lblBaseAddr->setObjectName("lblBaseAddr");
        lblBaseAddr->setGeometry(QRect(10, 0, 131, 29));
        DisasmWidget->setWidget(dockWidgetContents);

        retranslateUi(DisasmWidget);

        QMetaObject::connectSlotsByName(DisasmWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DisasmWidget)
    {
        DisasmWidget->setWindowTitle(QCoreApplication::translate("DisasmWidget", "DISASM", nullptr));
        labelArch->setText(QCoreApplication::translate("DisasmWidget", "Arch:", nullptr));
        comboEndian->setItemText(0, QCoreApplication::translate("DisasmWidget", "Little Endian", nullptr));
        comboEndian->setItemText(1, QCoreApplication::translate("DisasmWidget", "Big Endian", nullptr));

        lblSelected->setText(QCoreApplication::translate("DisasmWidget", "Selected:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DisasmWidget", "x86/64", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DisasmWidget", "x86/32", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DisasmWidget", "ARM32", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DisasmWidget", "ARM32/THUMB", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("DisasmWidget", "ARM64", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("DisasmWidget", "MIPS", nullptr));

        btnDisasm->setText(QCoreApplication::translate("DisasmWidget", "Disasm", nullptr));
        labelEndian->setText(QCoreApplication::translate("DisasmWidget", "Endian:", nullptr));
        lblBaseAddr->setText(QCoreApplication::translate("DisasmWidget", "Base Address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisasmWidget: public Ui_DisasmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISASMWIDGET_H
