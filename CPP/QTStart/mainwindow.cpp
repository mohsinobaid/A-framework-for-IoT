#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>

#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QJsonArray>


#include "mytcpserver.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupImageButtons();
}

//This functions adds images to the selction button
void MainWindow::setupImageButtons()
{
    //arduino image
    QPixmap pixmap(":/images/arduino.png");
    QIcon ButtonIcon(pixmap);
    ui->arduinoButton->setIcon(ButtonIcon);
    ui->arduinoButton->setIconSize((QSize(80,80)));

    //rasb pi image
    QPixmap pixmap2(":/images/rasbpi.png");
    QIcon ButtonIcon2(pixmap2);
    ui->raspButton->setIcon(ButtonIcon2);
    ui->raspButton->setIconSize((QSize(80,80)));
}

void MainWindow::on_arduinoButton_clicked()
{
    //Ard ard = new Ard();
    //ardUI = new ArduinoUI(this, ard);
    ardUI = new ArduinoUI(this);
    ardUI->setup();
    ui->centralWidget->hide();
    ardUI->show();

}

void MainWindow::on_raspButton_clicked()
{
    raspUI = new RaspUI(this);
    raspUI->setup();
    ui->centralWidget->hide();
    raspUI->show();
}

void MainWindow::on_otherButton_clicked()
{

    QEventLoop eventLoop;
    // "quit()" the event-loop, when the network request "finished()"
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QUrl url("https://api.spark.io/v1/devices/53ff70066667574852212067/reading?access_token=94f1858893b749831ee5704732a1814beea6b678");
    QNetworkRequest req(url);
    QNetworkReply *reply = mgr.get(req);
    eventLoop.exec(); // blocks stack until "finished()" has been called

    if (reply->error() == QNetworkReply::NoError) {

        QString strReply = (QString)reply->readAll();
        qDebug() << "Response:" << strReply;
        QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
        QJsonObject jsonObj = jsonResponse.object();
        qDebug() << "result:" << jsonObj["result"].toInt();
        delete reply;
    }
    else {
        //failure
        qDebug() << "Failure" <<reply->errorString();
        delete reply;
    }


/*
    QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
    QUrlQuery postData;
    postData.addQueryItem("access_token","94f1858893b749831ee5704732a1814beea6b678");
    postData.addQueryItem("params","l2,HIGH");
    QUrl url("https://api.spark.io/v1/devices/53ff70066667574852212067/led");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,
                      "application/x-www-form-urlencoded");
    networkManager->post(request,postData.toString(QUrl::FullyEncoded).toUtf8());
*/

}



MainWindow::~MainWindow()
{
    delete ui;
}
