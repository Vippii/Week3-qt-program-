/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *action_Save;
    QAction *saveButton;
    QAction *exitButton;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddButton;
    QPushButton *EditButton;
    QPushButton *RemoveButton;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_Files;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(446, 523);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        saveButton = new QAction(MainWindow);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        exitButton = new QAction(MainWindow);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        horizontalLayout_2->addWidget(AddButton);

        EditButton = new QPushButton(centralWidget);
        EditButton->setObjectName(QStringLiteral("EditButton"));

        horizontalLayout_2->addWidget(EditButton);

        RemoveButton = new QPushButton(centralWidget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));

        horizontalLayout_2->addWidget(RemoveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 446, 26));
        menu_Files = new QMenu(menuBar);
        menu_Files->setObjectName(QStringLiteral("menu_Files"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_Files->menuAction());
        menu_Files->addAction(saveButton);
        menu_Files->addAction(exitButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        saveButton->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));
        AddButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        EditButton->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        RemoveButton->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        menu_Files->setTitle(QApplication::translate("MainWindow", "&Files", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
