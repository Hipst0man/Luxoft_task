#ifndef FAVORITES_H
#define FAVORITES_H

#include <QDialog>
#include <QListWidget>

namespace Ui {
class Favorites;
}

class Favorites : public QDialog
{
    Q_OBJECT

public:
    explicit Favorites(QWidget *parent = nullptr);
    ~Favorites();
    void setItem(QString name);

private:
    Ui::Favorites *ui;

private slots:
    void deleteItem();
    void makeCall();
};

#endif // FAVORITES_H
