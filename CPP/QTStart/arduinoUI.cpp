#include "arduinoUI.h"
#include "ui_arduinoUI.h"

ArduinoUI::ArduinoUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArduinoUI)
{
    ui->setupUi(this);
}

/*
 * This Function sets up the UI.
 * Hides all the configuration panels until user clicks the specific connection type.
 */
void ArduinoUI::setup(){

    ui->emptyConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));


    ui->serialConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->serialConfig->hide();

    ui->ethernetConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->ethernetConfig->hide();

    ui->wifiConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->wifiConfig->hide();
}

void ArduinoUI::on_serialButton_clicked()
{
    ui->emptyConfig->hide();
    ui->ethernetConfig->hide();
    ui->wifiConfig->hide();
    ui->serialConfig->show();
}

void ArduinoUI::on_ethernetButton_clicked()
{
    ui->emptyConfig->hide();
    ui->serialConfig->hide();
    ui->wifiConfig->hide();
    ui->ethernetConfig->show();
}

void ArduinoUI::on_wifiButton_clicked()
{
    ui->emptyConfig->hide();
    ui->serialConfig->hide();
    ui->ethernetConfig->hide();
    ui->wifiConfig->show();
}


void ArduinoUI::on_configAcceptSerial_clicked()
{
    this->close();
    functions = new Functions(this->parentWidget());
    functions->setup(0);
    functions->show();
}

void ArduinoUI::on_configAcceptWifi_clicked()
{

}

void ArduinoUI::on_configAcceptEthernet_clicked()
{

}

ArduinoUI::~ArduinoUI()
{
    delete ui;
}
