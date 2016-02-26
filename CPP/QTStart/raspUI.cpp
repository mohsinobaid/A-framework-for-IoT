#include "raspUI.h"
#include "ui_raspUI.h"
#include "functions.h"

RaspUI::RaspUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaspUI)
{
    ui->setupUi(this);
}


/*
 * This Function sets up the UI.
 * Hides all the configuration panels until user clicks the specific connection type.
 */
void RaspUI::setup(){

    ui->emptyConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));


    ui->serialConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->serialConfig->hide();

    ui->ethernetConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->ethernetConfig->hide();

    ui->wifiConfig->setGeometry((QRect(QPoint(20, 100),QSize(490,140))));
    ui->wifiConfig->hide();
}

void RaspUI::on_serialButton_clicked()
{
    ui->emptyConfig->hide();
    ui->ethernetConfig->hide();
    ui->wifiConfig->hide();
    ui->serialConfig->show();
}

void RaspUI::on_ethernetButton_clicked()
{
    ui->emptyConfig->hide();
    ui->serialConfig->hide();
    ui->wifiConfig->hide();
    ui->ethernetConfig->show();
}

void RaspUI::on_wifiButton_clicked()
{
    ui->emptyConfig->hide();
    ui->serialConfig->hide();
    ui->ethernetConfig->hide();
    ui->wifiConfig->show();
}


void RaspUI::on_configAcceptSerial_clicked()
{
    this->close();
    functions = new Functions(this->parentWidget());
    functions->setup(1);
    functions->show();
}

void RaspUI::on_configAcceptWifi_clicked()
{



}

void RaspUI::on_configAcceptEthernet_clicked()
{
    this->close();
    functions = new Functions(this->parentWidget());
    functions->setup(1);
    functions->show();

    qDebug("Server Started");
}

RaspUI::~RaspUI()
{
    delete ui;
}
