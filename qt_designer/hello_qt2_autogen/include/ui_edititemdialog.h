/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *unitCost;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *stockLevel;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *reorder;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QStringLiteral("EditItemDialog"));
        EditItemDialog->resize(400, 300);
        layoutWidget = new QWidget(EditItemDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 381, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        unitCost = new QDoubleSpinBox(layoutWidget);
        unitCost->setObjectName(QStringLiteral("unitCost"));

        horizontalLayout_2->addWidget(unitCost);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        stockLevel = new QSpinBox(layoutWidget);
        stockLevel->setObjectName(QStringLiteral("stockLevel"));

        horizontalLayout_3->addWidget(stockLevel);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        reorder = new QCheckBox(layoutWidget);
        reorder->setObjectName(QStringLiteral("reorder"));

        horizontalLayout_4->addWidget(reorder);

        horizontalSpacer_4 = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_5->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditItemDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditItemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QApplication::translate("EditItemDialog", "Dialog", Q_NULLPTR));
        name->setText(QApplication::translate("EditItemDialog", "Item_Name", Q_NULLPTR));
        label->setText(QApplication::translate("EditItemDialog", "Item Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditItemDialog", "Item Cost", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditItemDialog", "Stock Level", Q_NULLPTR));
        reorder->setText(QApplication::translate("EditItemDialog", "Reorder?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
