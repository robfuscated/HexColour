/********************************************************************************
** Form generated from reading UI file 'hexwalkmain.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXWALKMAIN_H
#define UI_HEXWALKMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../qhexedit/qhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_HexWalkMain
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *mainSplitter;
    QHexEdit *widget;
    QWidget *tagsPane;
    QVBoxLayout *tagsPaneLayout;
    QGroupBox *tagsGroupBox;
    QVBoxLayout *tagsGroupBoxLayout;
    QHBoxLayout *tagsButtonLayout;
    QPushButton *tagsLoadBtn;
    QPushButton *tagsSaveBtn;
    QPushButton *tagsResetBtn;
    QSpacerItem *tagsHorizontalSpacer;
    QPushButton *tagsDelBtn;
    QPushButton *tagsAddBtn;
    QTableWidget *tagsTableWidget;
    QGroupBox *groupBox;
    QLabel *hexlbl;
    QLabel *declbl;
    QLabel *intlelbl;
    QLabel *binlbl;
    QLabel *hexTextedit;
    QLabel *decTextedit;
    QLabel *intleTextedit;
    QLabel *binTextedit;
    QLabel *floatlbl_le;
    QLabel *floatTextedit_le;
    QLabel *asciilbl;
    QLabel *asciiTextEdit;
    QLabel *sellbl;
    QLabel *selTextedit;
    QCheckBox *signedcb;
    QLabel *floatTextedit_be;
    QLabel *floatlbl_be;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HexWalkMain)
    {
        if (HexWalkMain->objectName().isEmpty())
            HexWalkMain->setObjectName("HexWalkMain");
        HexWalkMain->resize(1400, 786);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HexWalkMain->sizePolicy().hasHeightForWidth());
        HexWalkMain->setSizePolicy(sizePolicy);
        HexWalkMain->setMinimumSize(QSize(1000, 600));
        HexWalkMain->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AnimatedDocks);
        actionExit = new QAction(HexWalkMain);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(HexWalkMain);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainSplitter = new QSplitter(centralwidget);
        mainSplitter->setObjectName("mainSplitter");
        mainSplitter->setOrientation(Qt::Horizontal);
        widget = new QHexEdit(mainSplitter);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setAcceptDrops(true);
        mainSplitter->addWidget(widget);
        tagsPane = new QWidget(mainSplitter);
        tagsPane->setObjectName("tagsPane");
        tagsPaneLayout = new QVBoxLayout(tagsPane);
        tagsPaneLayout->setObjectName("tagsPaneLayout");
        tagsPaneLayout->setContentsMargins(0, 0, 0, 0);
        tagsGroupBox = new QGroupBox(tagsPane);
        tagsGroupBox->setObjectName("tagsGroupBox");
        tagsGroupBoxLayout = new QVBoxLayout(tagsGroupBox);
        tagsGroupBoxLayout->setObjectName("tagsGroupBoxLayout");
        tagsButtonLayout = new QHBoxLayout();
        tagsButtonLayout->setObjectName("tagsButtonLayout");
        tagsLoadBtn = new QPushButton(tagsGroupBox);
        tagsLoadBtn->setObjectName("tagsLoadBtn");

        tagsButtonLayout->addWidget(tagsLoadBtn);

        tagsSaveBtn = new QPushButton(tagsGroupBox);
        tagsSaveBtn->setObjectName("tagsSaveBtn");

        tagsButtonLayout->addWidget(tagsSaveBtn);

        tagsResetBtn = new QPushButton(tagsGroupBox);
        tagsResetBtn->setObjectName("tagsResetBtn");

        tagsButtonLayout->addWidget(tagsResetBtn);

        tagsHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        tagsButtonLayout->addItem(tagsHorizontalSpacer);

        tagsDelBtn = new QPushButton(tagsGroupBox);
        tagsDelBtn->setObjectName("tagsDelBtn");

        tagsButtonLayout->addWidget(tagsDelBtn);

        tagsAddBtn = new QPushButton(tagsGroupBox);
        tagsAddBtn->setObjectName("tagsAddBtn");

        tagsButtonLayout->addWidget(tagsAddBtn);


        tagsGroupBoxLayout->addLayout(tagsButtonLayout);

        tagsTableWidget = new QTableWidget(tagsGroupBox);
        tagsTableWidget->setObjectName("tagsTableWidget");

        tagsGroupBoxLayout->addWidget(tagsTableWidget);


        tagsPaneLayout->addWidget(tagsGroupBox);

        mainSplitter->addWidget(tagsPane);

        verticalLayout->addWidget(mainSplitter);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(600, 160));
        hexlbl = new QLabel(groupBox);
        hexlbl->setObjectName("hexlbl");
        hexlbl->setGeometry(QRect(560, 90, 61, 31));
        declbl = new QLabel(groupBox);
        declbl->setObjectName("declbl");
        declbl->setGeometry(QRect(140, 60, 51, 31));
        intlelbl = new QLabel(groupBox);
        intlelbl->setObjectName("intlelbl");
        intlelbl->setGeometry(QRect(140, 90, 51, 31));
        binlbl = new QLabel(groupBox);
        binlbl->setObjectName("binlbl");
        binlbl->setGeometry(QRect(140, 120, 51, 31));
        hexTextedit = new QLabel(groupBox);
        hexTextedit->setObjectName("hexTextedit");
        hexTextedit->setGeometry(QRect(630, 90, 281, 31));
        hexTextedit->setFrameShape(QFrame::Box);
        hexTextedit->setFrameShadow(QFrame::Sunken);
        hexTextedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hexTextedit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        decTextedit = new QLabel(groupBox);
        decTextedit->setObjectName("decTextedit");
        decTextedit->setGeometry(QRect(200, 60, 311, 31));
        decTextedit->setFrameShape(QFrame::Box);
        decTextedit->setFrameShadow(QFrame::Sunken);
        decTextedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        decTextedit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        intleTextedit = new QLabel(groupBox);
        intleTextedit->setObjectName("intleTextedit");
        intleTextedit->setGeometry(QRect(200, 90, 311, 31));
        intleTextedit->setFrameShape(QFrame::Box);
        intleTextedit->setFrameShadow(QFrame::Sunken);
        intleTextedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        intleTextedit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        binTextedit = new QLabel(groupBox);
        binTextedit->setObjectName("binTextedit");
        binTextedit->setGeometry(QRect(200, 120, 711, 31));
        binTextedit->setFrameShape(QFrame::Box);
        binTextedit->setFrameShadow(QFrame::Sunken);
        binTextedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        binTextedit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        floatlbl_le = new QLabel(groupBox);
        floatlbl_le->setObjectName("floatlbl_le");
        floatlbl_le->setGeometry(QRect(560, 30, 61, 31));
        floatTextedit_le = new QLabel(groupBox);
        floatTextedit_le->setObjectName("floatTextedit_le");
        floatTextedit_le->setGeometry(QRect(630, 30, 281, 31));
        floatTextedit_le->setFrameShape(QFrame::Box);
        floatTextedit_le->setFrameShadow(QFrame::Sunken);
        floatTextedit_le->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        floatTextedit_le->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        asciilbl = new QLabel(groupBox);
        asciilbl->setObjectName("asciilbl");
        asciilbl->setGeometry(QRect(200, 30, 61, 31));
        asciiTextEdit = new QLabel(groupBox);
        asciiTextEdit->setObjectName("asciiTextEdit");
        asciiTextEdit->setGeometry(QRect(260, 30, 251, 31));
        asciiTextEdit->setFrameShape(QFrame::Box);
        asciiTextEdit->setFrameShadow(QFrame::Sunken);
        asciiTextEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        asciiTextEdit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        sellbl = new QLabel(groupBox);
        sellbl->setObjectName("sellbl");
        sellbl->setGeometry(QRect(20, 30, 121, 31));
        selTextedit = new QLabel(groupBox);
        selTextedit->setObjectName("selTextedit");
        selTextedit->setGeometry(QRect(140, 30, 41, 31));
        selTextedit->setFrameShape(QFrame::Box);
        selTextedit->setFrameShadow(QFrame::Sunken);
        selTextedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        signedcb = new QCheckBox(groupBox);
        signedcb->setObjectName("signedcb");
        signedcb->setGeometry(QRect(20, 70, 88, 24));
        floatTextedit_be = new QLabel(groupBox);
        floatTextedit_be->setObjectName("floatTextedit_be");
        floatTextedit_be->setGeometry(QRect(630, 60, 281, 31));
        floatTextedit_be->setFrameShape(QFrame::Box);
        floatTextedit_be->setFrameShadow(QFrame::Sunken);
        floatTextedit_be->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        floatTextedit_be->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        floatlbl_be = new QLabel(groupBox);
        floatlbl_be->setObjectName("floatlbl_be");
        floatlbl_be->setGeometry(QRect(560, 60, 61, 31));

        verticalLayout->addWidget(groupBox);

        HexWalkMain->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HexWalkMain);
        statusbar->setObjectName("statusbar");
        HexWalkMain->setStatusBar(statusbar);

        retranslateUi(HexWalkMain);

        QMetaObject::connectSlotsByName(HexWalkMain);
    } // setupUi

    void retranslateUi(QMainWindow *HexWalkMain)
    {
        HexWalkMain->setWindowTitle(QCoreApplication::translate("HexWalkMain", "HexWalk", nullptr));
        actionExit->setText(QCoreApplication::translate("HexWalkMain", "Exit", nullptr));
        tagsGroupBox->setTitle(QCoreApplication::translate("HexWalkMain", "Byte Pattern", nullptr));
        tagsLoadBtn->setText(QCoreApplication::translate("HexWalkMain", "Load", nullptr));
        tagsSaveBtn->setText(QCoreApplication::translate("HexWalkMain", "Save", nullptr));
        tagsResetBtn->setText(QCoreApplication::translate("HexWalkMain", "Reset", nullptr));
        tagsDelBtn->setText(QCoreApplication::translate("HexWalkMain", "Del", nullptr));
        tagsAddBtn->setText(QCoreApplication::translate("HexWalkMain", "Add", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HexWalkMain", "Info", nullptr));
        hexlbl->setText(QCoreApplication::translate("HexWalkMain", "Hex:", nullptr));
        declbl->setText(QCoreApplication::translate("HexWalkMain", "IntBE:", nullptr));
        intlelbl->setText(QCoreApplication::translate("HexWalkMain", "IntLE:", nullptr));
        binlbl->setText(QCoreApplication::translate("HexWalkMain", "Bin:", nullptr));
        hexTextedit->setText(QString());
        decTextedit->setText(QString());
        intleTextedit->setText(QString());
        binTextedit->setText(QString());
        floatlbl_le->setText(QCoreApplication::translate("HexWalkMain", "FloatLE:", nullptr));
        floatTextedit_le->setText(QString());
        asciilbl->setText(QCoreApplication::translate("HexWalkMain", "ASCII:", nullptr));
        asciiTextEdit->setText(QString());
        sellbl->setText(QCoreApplication::translate("HexWalkMain", "Selected bytes:", nullptr));
        selTextedit->setText(QString());
        signedcb->setText(QCoreApplication::translate("HexWalkMain", "Signed", nullptr));
        floatTextedit_be->setText(QString());
        floatlbl_be->setText(QCoreApplication::translate("HexWalkMain", "FloatBE:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexWalkMain: public Ui_HexWalkMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXWALKMAIN_H
