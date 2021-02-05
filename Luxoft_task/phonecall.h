#ifndef PHONECALL_H
#define PHONECALL_H

#include <QDialog>

namespace Ui {
class PhoneCall;
}

class PhoneCall : public QDialog
{
    Q_OBJECT

public:
    explicit PhoneCall(QWidget *parent = nullptr, QString name = nullptr);
    ~PhoneCall();

private:
    Ui::PhoneCall *ui;

private slots:
     void buttonPushed() { close();}
};

#endif // PHONECALL_H
