/********************************************************************************
** Form generated from reading UI file 'converterwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERWIDGET_H
#define UI_CONVERTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConverterWidget
{
public:
    QWidget *dockWidgetContents;
    QLineEdit *hexTextEdit;
    QLineEdit *binTextEdit;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *decTextEdit;
    QLabel *label;
    QLineEdit *floatTextEdit;
    QLabel *label_3;
    QCheckBox *checkBox_be;

    void setupUi(QDockWidget *ConverterWidget)
    {
        if (ConverterWidget->objectName().isEmpty())
            ConverterWidget->setObjectName("ConverterWidget");
        ConverterWidget->resize(280, 250);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConverterWidget->sizePolicy().hasHeightForWidth());
        ConverterWidget->setSizePolicy(sizePolicy);
        ConverterWidget->setMinimumSize(QSize(280, 250));
        ConverterWidget->setFloating(true);
        ConverterWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        ConverterWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        hexTextEdit = new QLineEdit(dockWidgetContents);
        hexTextEdit->setObjectName("hexTextEdit");
        hexTextEdit->setGeometry(QRect(100, 10, 171, 25));
        binTextEdit = new QLineEdit(dockWidgetContents);
        binTextEdit->setObjectName("binTextEdit");
        binTextEdit->setGeometry(QRect(100, 40, 171, 25));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 90, 25));
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 40, 90, 25));
        decTextEdit = new QLineEdit(dockWidgetContents);
        decTextEdit->setObjectName("decTextEdit");
        decTextEdit->setGeometry(QRect(100, 70, 171, 25));
        label = new QLabel(dockWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 90, 25));
        floatTextEdit = new QLineEdit(dockWidgetContents);
        floatTextEdit->setObjectName("floatTextEdit");
        floatTextEdit->setGeometry(QRect(100, 100, 171, 25));
        floatTextEdit->setReadOnly(true);
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 90, 25));
        checkBox_be = new QCheckBox(dockWidgetContents);
        checkBox_be->setObjectName("checkBox_be");
        checkBox_be->setGeometry(QRect(10, 160, 121, 24));
        ConverterWidget->setWidget(dockWidgetContents);

        retranslateUi(ConverterWidget);

        QMetaObject::connectSlotsByName(ConverterWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ConverterWidget)
    {
        ConverterWidget->setWindowTitle(QCoreApplication::translate("ConverterWidget", "CONVERTER", nullptr));
        label_2->setText(QCoreApplication::translate("ConverterWidget", "Hex:", nullptr));
        label_4->setText(QCoreApplication::translate("ConverterWidget", "Bin:", nullptr));
        label->setText(QCoreApplication::translate("ConverterWidget", "Dec:", nullptr));
        label_3->setText(QCoreApplication::translate("ConverterWidget", "Float:", nullptr));
        checkBox_be->setText(QCoreApplication::translate("ConverterWidget", "Big Endian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConverterWidget: public Ui_ConverterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERWIDGET_H
