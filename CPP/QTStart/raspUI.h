#ifndef RASPUI_H
#define RASPUI_H

#include <QWidget>
#include "functions.h"
#include "mytcpserver.h"

namespace Ui {
class RaspUI;
}

class RaspUI : public QWidget
{
    Q_OBJECT

public:
    explicit RaspUI(QWidget *parent = 0);
    ~RaspUI();
    void setup();

private slots:
    void on_configAcceptSerial_clicked();

    void on_serialButton_clicked();

    void on_ethernetButton_clicked();

    void on_wifiButton_clicked();

    void on_configAcceptWifi_clicked();

    void on_configAcceptEthernet_clicked();

private:
    Ui::RaspUI *ui;
    Functions *functions;
};

#endif // RASPUI_H
