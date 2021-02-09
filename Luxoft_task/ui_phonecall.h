/********************************************************************************
** Form generated from reading UI file 'phonecall.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONECALL_H
#define UI_PHONECALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PhoneCall
{
public:
    QLabel *image;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *PhoneCall)
    {
        if (PhoneCall->objectName().isEmpty())
            PhoneCall->setObjectName(QString::fromUtf8("PhoneCall"));
        PhoneCall->resize(300, 500);
        PhoneCall->setAutoFillBackground(false);
        image = new QLabel(PhoneCall);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(0, 0, 300, 500));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(PhoneCall);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 460, 80, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Cambria\";"));
        label = new QLabel(PhoneCall);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 120, 300, 50));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Cambria\";\n"
"color:rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(PhoneCall);

        QMetaObject::connectSlotsByName(PhoneCall);
    } // setupUi

    void retranslateUi(QDialog *PhoneCall)
    {
        PhoneCall->setWindowTitle(QCoreApplication::translate("PhoneCall", "Dialog", nullptr));
        image->setText(QCoreApplication::translate("PhoneCall", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("PhoneCall", "End Call", nullptr));
        label->setText(QCoreApplication::translate("PhoneCall", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneCall: public Ui_PhoneCall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONECALL_H
