#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "favorites.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addFav();
    void makeCall();
    void on_actionFavorites_list_triggered();
    void search(const QString &);
    void toGrid();
    void toList();

private:
    Ui::MainWindow* ui;
    Favorites* fav;
};
#endif // MAINWINDOW_H
