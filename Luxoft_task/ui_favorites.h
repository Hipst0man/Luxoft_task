/********************************************************************************
** Form generated from reading UI file 'favorites.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORITES_H
#define UI_FAVORITES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Favorites
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *callButt;
    QPushButton *delButt;

    void setupUi(QDialog *Favorites)
    {
        if (Favorites->objectName().isEmpty())
            Favorites->setObjectName(QString::fromUtf8("Favorites"));
        Favorites->resize(715, 372);
        verticalLayout = new QVBoxLayout(Favorites);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Favorites);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setIconSize(QSize(50, 50));
        listWidget->setSpacing(1);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        callButt = new QPushButton(Favorites);
        callButt->setObjectName(QString::fromUtf8("callButt"));

        horizontalLayout->addWidget(callButt);

        delButt = new QPushButton(Favorites);
        delButt->setObjectName(QString::fromUtf8("delButt"));

        horizontalLayout->addWidget(delButt);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Favorites);

        QMetaObject::connectSlotsByName(Favorites);
    } // setupUi

    void retranslateUi(QDialog *Favorites)
    {
        Favorites->setWindowTitle(QCoreApplication::translate("Favorites", "Dialog", nullptr));
        callButt->setText(QCoreApplication::translate("Favorites", "Make Call", nullptr));
        delButt->setText(QCoreApplication::translate("Favorites", "Delete from fav", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Favorites: public Ui_Favorites {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITES_H
