/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFavorites_list;
    QAction *actionList;
    QAction *actionGrid;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *callButt;
    QPushButton *favButt;
    QLineEdit *search;
    QMenuBar *menubar;
    QMenu *menuContacts;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 335);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionFavorites_list = new QAction(MainWindow);
        actionFavorites_list->setObjectName(QString::fromUtf8("actionFavorites_list"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/Black_Star.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFavorites_list->setIcon(icon);
        actionList = new QAction(MainWindow);
        actionList->setObjectName(QString::fromUtf8("actionList"));
        actionGrid = new QAction(MainWindow);
        actionGrid->setObjectName(QString::fromUtf8("actionGrid"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setIconSize(QSize(50, 50));
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(3);
        listWidget->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        callButt = new QPushButton(centralwidget);
        callButt->setObjectName(QString::fromUtf8("callButt"));

        horizontalLayout->addWidget(callButt);

        favButt = new QPushButton(centralwidget);
        favButt->setObjectName(QString::fromUtf8("favButt"));

        horizontalLayout->addWidget(favButt);


        verticalLayout->addLayout(horizontalLayout);

        search = new QLineEdit(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));

        verticalLayout->addWidget(search);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 20));
        menuContacts = new QMenu(menubar);
        menuContacts->setObjectName(QString::fromUtf8("menuContacts"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuContacts->menuAction());
        menubar->addAction(menuView->menuAction());
        menuContacts->addAction(actionFavorites_list);
        menuView->addAction(actionGrid);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFavorites_list->setText(QCoreApplication::translate("MainWindow", "Favorites list", nullptr));
        actionList->setText(QCoreApplication::translate("MainWindow", "List", nullptr));
        actionGrid->setText(QCoreApplication::translate("MainWindow", "Change View", nullptr));
        callButt->setText(QCoreApplication::translate("MainWindow", "Make Call", nullptr));
        favButt->setText(QCoreApplication::translate("MainWindow", "Add to Fav", nullptr));
        menuContacts->setTitle(QCoreApplication::translate("MainWindow", "Contacts", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
