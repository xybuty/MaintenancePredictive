/********************************************************************************
** Form generated from reading UI file 'MaintenancePredictive.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCEPREDICTIVE_H
#define UI_MAINTENANCEPREDICTIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PictrueWgt.h"

QT_BEGIN_NAMESPACE

class Ui_MaintenancePredictiveClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QPushButton *title_btn0;
    QWidget *widget_0;
    QGridLayout *gridLayout_4;
    QPushButton *fileBtn;
    QPushButton *sqlBtn;
    QPushButton *title_btn1;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *title_btn2;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *title_btn3;
    QWidget *widget_3;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_22;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_23;
    QPushButton *pushButton_17;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *title_btn4;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QPushButton *clusteringBtn;
    QPushButton *pushButton_24;
    QPushButton *pushButton_26;
    QPushButton *pushButton_29;
    QPushButton *pushButton_27;
    QPushButton *pushButton_25;
    QPushButton *pushButton_28;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *title_btn5;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_7;
    PitureLabel *pngLabel;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QButtonGroup *mPButtonGroup;

    void setupUi(QMainWindow *MaintenancePredictiveClass)
    {
        if (MaintenancePredictiveClass->objectName().isEmpty())
            MaintenancePredictiveClass->setObjectName(QStringLiteral("MaintenancePredictiveClass"));
        MaintenancePredictiveClass->resize(1529, 1012);
        centralWidget = new QWidget(MaintenancePredictiveClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -4, 705, 959));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        title_btn0 = new QPushButton(scrollAreaWidgetContents);
        title_btn0->setObjectName(QStringLiteral("title_btn0"));

        verticalLayout_3->addWidget(title_btn0);

        widget_0 = new QWidget(scrollAreaWidgetContents);
        widget_0->setObjectName(QStringLiteral("widget_0"));
        gridLayout_4 = new QGridLayout(widget_0);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        fileBtn = new QPushButton(widget_0);
        fileBtn->setObjectName(QStringLiteral("fileBtn"));
        fileBtn->setCheckable(false);

        gridLayout_4->addWidget(fileBtn, 0, 0, 1, 1);

        sqlBtn = new QPushButton(widget_0);
        sqlBtn->setObjectName(QStringLiteral("sqlBtn"));
        sqlBtn->setCheckable(false);

        gridLayout_4->addWidget(sqlBtn, 0, 1, 1, 1);


        verticalLayout_3->addWidget(widget_0);

        title_btn1 = new QPushButton(scrollAreaWidgetContents);
        title_btn1->setObjectName(QStringLiteral("title_btn1"));

        verticalLayout_3->addWidget(title_btn1);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_5 = new QPushButton(widget);
        mPButtonGroup = new QButtonGroup(MaintenancePredictiveClass);
        mPButtonGroup->setObjectName(QStringLiteral("mPButtonGroup"));
        mPButtonGroup->setExclusive(false);
        mPButtonGroup->addButton(pushButton_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setCheckable(true);

        gridLayout_2->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        mPButtonGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCheckable(true);

        gridLayout_2->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        mPButtonGroup->addButton(pushButton_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCheckable(true);

        gridLayout_2->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(widget);
        mPButtonGroup->addButton(pushButton_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setCheckable(true);

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        mPButtonGroup->addButton(pushButton_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setCheckable(true);

        gridLayout_2->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(widget);
        mPButtonGroup->addButton(pushButton_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setCheckable(true);

        gridLayout_2->addWidget(pushButton_8, 2, 1, 1, 1);


        verticalLayout_3->addWidget(widget);

        title_btn2 = new QPushButton(scrollAreaWidgetContents);
        title_btn2->setObjectName(QStringLiteral("title_btn2"));

        verticalLayout_3->addWidget(title_btn2);

        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton_2 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCheckable(true);

        gridLayout_5->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setCheckable(true);

        gridLayout_5->addWidget(pushButton_9, 0, 1, 1, 1);

        pushButton_10 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setCheckable(true);

        gridLayout_5->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setCheckable(true);

        gridLayout_5->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setCheckable(true);

        gridLayout_5->addWidget(pushButton_12, 2, 0, 1, 1);

        pushButton_13 = new QPushButton(widget_2);
        mPButtonGroup->addButton(pushButton_13);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setCheckable(true);

        gridLayout_5->addWidget(pushButton_13, 2, 1, 1, 1);


        verticalLayout_3->addWidget(widget_2);

        title_btn3 = new QPushButton(scrollAreaWidgetContents);
        title_btn3->setObjectName(QStringLiteral("title_btn3"));

        verticalLayout_3->addWidget(title_btn3);

        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_8 = new QGridLayout(widget_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pushButton_22 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_22);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setCheckable(true);

        gridLayout_8->addWidget(pushButton_22, 3, 0, 1, 1);

        pushButton_18 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_18);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setCheckable(true);

        gridLayout_8->addWidget(pushButton_18, 0, 0, 1, 1);

        pushButton_19 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_19);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setCheckable(true);

        gridLayout_8->addWidget(pushButton_19, 0, 1, 1, 1);

        pushButton_23 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_23);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setCheckable(true);

        gridLayout_8->addWidget(pushButton_23, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_17);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setCheckable(true);

        gridLayout_8->addWidget(pushButton_17, 1, 0, 1, 1);

        pushButton_15 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_15);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setCheckable(true);

        gridLayout_8->addWidget(pushButton_15, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setCheckable(true);

        gridLayout_8->addWidget(pushButton_14, 2, 0, 1, 1);

        pushButton_16 = new QPushButton(widget_3);
        mPButtonGroup->addButton(pushButton_16);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setCheckable(true);

        gridLayout_8->addWidget(pushButton_16, 2, 1, 1, 1);


        verticalLayout_3->addWidget(widget_3);

        title_btn4 = new QPushButton(scrollAreaWidgetContents);
        title_btn4->setObjectName(QStringLiteral("title_btn4"));

        verticalLayout_3->addWidget(title_btn4);

        widget_4 = new QWidget(scrollAreaWidgetContents);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        clusteringBtn = new QPushButton(widget_4);
        mPButtonGroup->addButton(clusteringBtn);
        clusteringBtn->setObjectName(QStringLiteral("clusteringBtn"));
        clusteringBtn->setCheckable(true);

        gridLayout_3->addWidget(clusteringBtn, 0, 0, 1, 1);

        pushButton_24 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_24);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setCheckable(true);

        gridLayout_3->addWidget(pushButton_24, 0, 1, 1, 1);

        pushButton_26 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_26);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setCheckable(true);

        gridLayout_3->addWidget(pushButton_26, 1, 1, 1, 1);

        pushButton_29 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_29);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setCheckable(true);

        gridLayout_3->addWidget(pushButton_29, 3, 0, 1, 1);

        pushButton_27 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_27);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setCheckable(true);

        gridLayout_3->addWidget(pushButton_27, 2, 0, 1, 1);

        pushButton_25 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_25);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setCheckable(true);

        gridLayout_3->addWidget(pushButton_25, 1, 0, 1, 1);

        pushButton_28 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_28);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setCheckable(true);

        gridLayout_3->addWidget(pushButton_28, 2, 1, 1, 1);

        pushButton_30 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_30);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setCheckable(true);

        gridLayout_3->addWidget(pushButton_30, 3, 1, 1, 1);

        pushButton_31 = new QPushButton(widget_4);
        mPButtonGroup->addButton(pushButton_31);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setCheckable(true);

        gridLayout_3->addWidget(pushButton_31, 4, 0, 1, 1);


        verticalLayout_3->addWidget(widget_4);

        title_btn5 = new QPushButton(scrollAreaWidgetContents);
        title_btn5->setObjectName(QStringLiteral("title_btn5"));

        verticalLayout_3->addWidget(title_btn5);

        widget_5 = new QWidget(scrollAreaWidgetContents);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_20 = new QPushButton(widget_5);
        mPButtonGroup->addButton(pushButton_20);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setCheckable(true);

        gridLayout_6->addWidget(pushButton_20, 0, 0, 1, 1);

        pushButton_21 = new QPushButton(widget_5);
        mPButtonGroup->addButton(pushButton_21);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setCheckable(true);

        gridLayout_6->addWidget(pushButton_21, 0, 1, 1, 1);


        verticalLayout_3->addWidget(widget_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pngLabel = new PitureLabel(frame);
        pngLabel->setObjectName(QStringLiteral("pngLabel"));

        gridLayout_7->addWidget(pngLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 3);
        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        splitter->addWidget(layoutWidget1);

        verticalLayout_4->addWidget(splitter);

        MaintenancePredictiveClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MaintenancePredictiveClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MaintenancePredictiveClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MaintenancePredictiveClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MaintenancePredictiveClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MaintenancePredictiveClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1529, 26));
        MaintenancePredictiveClass->setMenuBar(menuBar);

        retranslateUi(MaintenancePredictiveClass);

        QMetaObject::connectSlotsByName(MaintenancePredictiveClass);
    } // setupUi

    void retranslateUi(QMainWindow *MaintenancePredictiveClass)
    {
        MaintenancePredictiveClass->setWindowTitle(QApplication::translate("MaintenancePredictiveClass", "MaintenancePredictive", Q_NULLPTR));
        title_btn0->setText(QApplication::translate("MaintenancePredictiveClass", "\346\225\260\346\215\256\346\216\245\345\205\245", Q_NULLPTR));
        fileBtn->setText(QApplication::translate("MaintenancePredictiveClass", "\346\234\254\345\234\260\346\226\207\344\273\266", Q_NULLPTR));
        sqlBtn->setText(QApplication::translate("MaintenancePredictiveClass", "\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        title_btn1->setText(QApplication::translate("MaintenancePredictiveClass", "\346\225\260\346\215\256\347\273\237\350\256\241\345\210\206\346\236\220", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MaintenancePredictiveClass", "\347\274\272\345\244\261\345\200\274\347\273\237\350\256\241", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MaintenancePredictiveClass", "\346\240\267\346\234\254\344\270\215\345\271\263\350\241\241", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MaintenancePredictiveClass", "\346\255\243\346\200\201\345\210\206\345\270\203\346\243\200\351\252\214", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MaintenancePredictiveClass", "\345\206\227\344\275\231\345\261\236\346\200\247\350\257\206\345\210\253", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MaintenancePredictiveClass", "ADF\346\243\200\351\252\214", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MaintenancePredictiveClass", "\345\215\241\346\226\271\346\243\200\351\252\214", Q_NULLPTR));
        title_btn2->setText(QApplication::translate("MaintenancePredictiveClass", "\346\225\260\346\215\256\351\242\204\345\244\204\347\220\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MaintenancePredictiveClass", "\347\274\272\345\244\261\345\200\274\345\241\253\350\241\245", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MaintenancePredictiveClass", "\345\260\217\346\263\242\345\217\230\346\215\242", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MaintenancePredictiveClass", "onehot\347\274\226\347\240\201", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MaintenancePredictiveClass", "\346\273\244\346\263\242", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MaintenancePredictiveClass", "\351\242\221\345\237\237\345\217\230\346\215\242", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MaintenancePredictiveClass", "\345\267\256\345\210\206", Q_NULLPTR));
        title_btn3->setText(QApplication::translate("MaintenancePredictiveClass", "\347\211\271\345\276\201\345\267\245\347\250\213", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MaintenancePredictiveClass", "\346\255\243\345\210\231\345\214\226\346\236\204\351\200\240\347\250\200\347\226\217\345\217\230\351\207\217", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MaintenancePredictiveClass", "\345\210\227\345\242\236\345\212\240", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MaintenancePredictiveClass", "\345\210\227\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("MaintenancePredictiveClass", "\345\206\263\347\255\226\346\240\221\345\211\252\346\236\235", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MaintenancePredictiveClass", "\344\270\273\346\210\220\344\273\275\345\210\206\346\236\220", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MaintenancePredictiveClass", "\350\207\252\347\274\226\347\240\201\345\231\250", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MaintenancePredictiveClass", "\347\233\270\345\205\263\346\200\247\345\210\206\346\236\220", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MaintenancePredictiveClass", "\345\215\241\346\226\271\345\210\206\345\270\203\351\200\211\346\213\251\347\211\271\345\276\201", Q_NULLPTR));
        title_btn4->setText(QApplication::translate("MaintenancePredictiveClass", "\346\234\272\345\231\250\345\255\246\344\271\240\347\256\227\346\263\225", Q_NULLPTR));
        clusteringBtn->setText(QApplication::translate("MaintenancePredictiveClass", "\350\201\232\347\261\273", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MaintenancePredictiveClass", "\345\206\263\347\255\226\346\240\221\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("MaintenancePredictiveClass", "\351\232\217\346\234\272\346\243\256\346\236\227\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("MaintenancePredictiveClass", "\351\200\273\350\276\221\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("MaintenancePredictiveClass", "\346\234\200\350\277\221\351\202\273\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("MaintenancePredictiveClass", "\346\224\257\346\214\201\345\220\221\351\207\217\346\234\272\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("MaintenancePredictiveClass", "\346\234\264\347\264\240\350\264\235\345\217\266\346\226\257\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MaintenancePredictiveClass", "\346\242\257\345\272\246\346\217\220\345\215\207\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("MaintenancePredictiveClass", "\347\245\236\347\273\217\347\275\221\347\273\234\345\210\206\347\261\273/\345\233\236\345\275\222", Q_NULLPTR));
        title_btn5->setText(QApplication::translate("MaintenancePredictiveClass", "\347\273\223\346\236\234\345\257\274\345\207\272", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MaintenancePredictiveClass", "\346\225\260\346\215\256\345\257\274\345\207\272", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MaintenancePredictiveClass", "\346\250\241\345\236\213\345\257\274\345\207\272", Q_NULLPTR));
        pngLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintenancePredictiveClass: public Ui_MaintenancePredictiveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCEPREDICTIVE_H
