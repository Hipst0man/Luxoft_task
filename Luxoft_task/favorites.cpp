#include "favorites.h"
#include "ui_favorites.h"
#include "phonecall.h"

Favorites::Favorites(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Favorites)
{
    ui->setupUi(this);
    ui->listWidget->setStyleSheet
            (
                "QListWidget {background-color: rgb(255, 255, 255);} "
                "QListWidget::item { border-radius:6px; } "
                "QListWidget::item { background-color:rgb(16,135,121); } "
                "QListWidget { font: 20pt; } "
            );

    connect(ui->delButt,SIGNAL(clicked()),this,SLOT(deleteItem()));
    connect(ui->callButt, SIGNAL(clicked()), this, SLOT(makeCall()));

}

Favorites::~Favorites()
{
    delete ui;
}

void Favorites::setItem(QString name)
{
    int Check_ifin_Fav = 0;
    for(int i = 0; i<ui->listWidget->count(); i++)
    {
        if(ui->listWidget->item(i)->text() == name) Check_ifin_Fav = 1;
    }
    if(!Check_ifin_Fav)
    {QListWidgetItem  *item = new QListWidgetItem(QIcon(":/img/Images/icon-ios7-contact-512.png"), name);
    ui->listWidget->addItem(item);
    item->setTextAlignment(Qt::AlignCenter);}
}

void Favorites::deleteItem()
{
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}

void Favorites::makeCall()
{
    if(ui->listWidget->count()>0)
    {
        QString name = ui->listWidget->currentItem()->text();
        PhoneCall call(0,name);
        call.setModal(true);
        call.exec();
    }
}
