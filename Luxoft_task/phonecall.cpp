#include "phonecall.h"
#include "ui_phonecall.h"
#include <QPixmap>

PhoneCall::PhoneCall(QWidget *parent, QString name) :
    QDialog(parent),
    ui(new Ui::PhoneCall)
{
    ui->setupUi(this);
    setFixedSize(300,500);

    QString text = name;
    text = text.prepend("Calling ");
    ui->label->setText(text);

    QPixmap pix(":/img/Images/photo-1569982175971-d92b01cf8694.jpg");
    ui->image->setPixmap(pix.scaled(1000,1333,Qt::KeepAspectRatio));

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(buttonPushed()));
}

PhoneCall::~PhoneCall()
{
    delete ui;
}

