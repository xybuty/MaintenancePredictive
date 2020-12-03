/********************************************************************************
** Form generated from reading UI file 'clusteringDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUSTERINGDLG_H
#define UI_CLUSTERINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clusteringDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QPushButton *FileButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *numSbx;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *maxNumSbx;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *centroidNumSbx;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *clusteringDlg)
    {
        if (clusteringDlg->objectName().isEmpty())
            clusteringDlg->setObjectName(QStringLiteral("clusteringDlg"));
        clusteringDlg->resize(459, 373);
        verticalLayout = new QVBoxLayout(clusteringDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(clusteringDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        FileButton = new QPushButton(clusteringDlg);
        FileButton->setObjectName(QStringLiteral("FileButton"));

        horizontalLayout_5->addWidget(FileButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(clusteringDlg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        numSbx = new QSpinBox(clusteringDlg);
        numSbx->setObjectName(QStringLiteral("numSbx"));
        numSbx->setMaximum(10000);

        horizontalLayout->addWidget(numSbx);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(clusteringDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        maxNumSbx = new QSpinBox(clusteringDlg);
        maxNumSbx->setObjectName(QStringLiteral("maxNumSbx"));
        maxNumSbx->setMaximum(1000000);

        horizontalLayout_2->addWidget(maxNumSbx);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(clusteringDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        centroidNumSbx = new QSpinBox(clusteringDlg);
        centroidNumSbx->setObjectName(QStringLiteral("centroidNumSbx"));
        centroidNumSbx->setMaximum(1000000);

        horizontalLayout_3->addWidget(centroidNumSbx);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(clusteringDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(clusteringDlg);

        QMetaObject::connectSlotsByName(clusteringDlg);
    } // setupUi

    void retranslateUi(QWidget *clusteringDlg)
    {
        clusteringDlg->setWindowTitle(QApplication::translate("clusteringDlg", "clusteringDlg", Q_NULLPTR));
        label_4->setText(QApplication::translate("clusteringDlg", "\346\226\207\344\273\266\344\275\215\347\275\256", Q_NULLPTR));
        FileButton->setText(QApplication::translate("clusteringDlg", "\351\200\211\346\213\251\346\226\207\344\273\266\344\275\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("clusteringDlg", "\350\201\232\347\261\273\344\270\252\346\225\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("clusteringDlg", "\346\234\200\345\244\247\350\277\255\344\273\243\346\254\241\346\225\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("clusteringDlg", "\345\210\235\345\247\213\345\214\226\350\264\250\345\277\203\346\254\241\346\225\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("clusteringDlg", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clusteringDlg: public Ui_clusteringDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERINGDLG_H
