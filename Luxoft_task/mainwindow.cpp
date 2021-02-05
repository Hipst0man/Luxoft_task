#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "phonecall.h"
#include <QPixmap>
#include <QListWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->setStyleSheet
            (
                "QListWidget {background-color: rgb(255, 255, 255);} "
                "QListWidget::item { border-radius:6px; } "
                "QListWidget::item { background-color:rgb(16,135,121); } "
                "QListWidget { font: 20pt; } "
            );

    QPixmap img(":/img/Images/icon-ios7-contact-512.png");

    QListWidgetItem  *item_1 = new QListWidgetItem(QIcon(img), "Yaroslav Masyna");
    ui->listWidget->addItem(item_1);
    item_1->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_2 = new QListWidgetItem(QIcon(img), "Adam Patrick");
    ui->listWidget->addItem(item_2);
    item_2->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_3 = new QListWidgetItem(QIcon(img), "Kevin Green");
    ui->listWidget->addItem(item_3);
    item_3->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_4 = new QListWidgetItem(QIcon(img), "Glehn Hughes");
    ui->listWidget->addItem(item_4);
    item_4->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_5 = new QListWidgetItem(QIcon(img), "Samantha Smith");
    ui->listWidget->addItem(item_5);
    item_5->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_6 = new QListWidgetItem(QIcon(img), "Piter Burger");
    ui->listWidget->addItem(item_6);
    item_6->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_7 = new QListWidgetItem(QIcon(img), "Jason Button");
    ui->listWidget->addItem(item_7);
    item_7->setTextAlignment(Qt::AlignCenter);


    QListWidgetItem  *item_8 = new QListWidgetItem(QIcon(img), "Garry Morti");
    ui->listWidget->addItem(item_8);
    item_8->setTextAlignment(Qt::AlignCenter);

    QListWidgetItem  *item_9 = new QListWidgetItem(QIcon(img), "Rick Jonson");
    ui->listWidget->addItem(item_9);
    item_9->setTextAlignment(Qt::AlignCenter);

    connect(ui->callButt,SIGNAL(clicked()),this,SLOT(makeCall()));
    connect(ui->favButt,SIGNAL(clicked()),this,SLOT(addFav()));
    connect(ui->search, SIGNAL(textEdited(const QString &)), this, SLOT(search(const QString &)));
    connect(ui->actionGrid, SIGNAL(triggered()), this, SLOT(toGrid()));
    connect(ui->actionList, SIGNAL(triggered()), this, SLOT(toList()));

    fav = new Favorites(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::makeCall()
 {
     if(ui->listWidget->count()>0)
     {
         QString name = ui->listWidget->currentItem()->text();
         PhoneCall call(0,name);
         call.setModal(true);
         call.exec();
     }
 }

 void MainWindow::addFav()
 {
     QString name = ui->listWidget->currentItem()->text();
     fav->setItem(name);
 }


void MainWindow::on_actionFavorites_list_triggered()
{
    fav->setWindowTitle("Favorites");
    fav->show();
}

void MainWindow::search(const QString &)
{
    QString searchText = ui->search->text();
    searchText = searchText.toLower();

    for(int i = 0; i<ui->listWidget->count(); i++)
    {
        if(ui->listWidget->item(i)->text().toLower().startsWith(searchText)) ui->listWidget->item(i)->setHidden(false);
        else ui->listWidget->item(i)->setHidden(true);
    }

}

void MainWindow::toGrid()
{
    ui->listWidget->setFlow(QListView::LeftToRight);
    ui->listWidget->setResizeMode(QListView::Adjust);
    ui->listWidget->setGridSize(QSize().scaled(100,100,Qt::KeepAspectRatio));
    ui->listWidget->setViewMode(QListView::IconMode);
}

void MainWindow::toList()
{
    ui->listWidget->setFlow(QListView::TopToBottom);
    ui->listWidget->setResizeMode(QListView::Adjust);
    ui->listWidget->setGridSize(QSize().scaled(100,60,Qt::KeepAspectRatio));
    ui->listWidget->setViewMode(QListView::ListMode);
}
