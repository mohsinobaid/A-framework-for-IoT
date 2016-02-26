#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QWidget>
#include "ard.h"
#include "mytcpserver.h"

namespace Ui {
class Functions;
}

class Functions : public QWidget
{
    Q_OBJECT

public:
    explicit Functions(QWidget *parent = 0);
    ~Functions();
    void setup(int choice);

private slots:
    void on_blinkLED_clicked();

private:
    Ui::Functions *ui;
    Ard *arduino;
    int myChoice;
    MyTcpServer *server;
};

#endif // FUNCTIONS_H
