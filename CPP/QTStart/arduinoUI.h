#ifndef ARDUINOUI_H
#define ARDUINOUI_H

#include <QWidget>
#include "functions.h"

namespace Ui {
class ArduinoUI;
}

class ArduinoUI : public QWidget
{
    Q_OBJECT

public:
    explicit ArduinoUI(QWidget *parent = 0);
    ~ArduinoUI();
    void setup();

private slots:
    void on_configAcceptSerial_clicked();

    void on_serialButton_clicked();

    void on_ethernetButton_clicked();

    void on_wifiButton_clicked();

    void on_configAcceptWifi_clicked();

    void on_configAcceptEthernet_clicked();

private:
    Ui::ArduinoUI *ui;
    Functions *functions;
};

#endif // ARDUINOUI_H
