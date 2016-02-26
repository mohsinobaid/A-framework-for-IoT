/********************************************************************************
** Form generated from reading UI file 'raspUI.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASPUI_H
#define UI_RASPUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaspUI
{
public:
    QGroupBox *emptyConfig;
    QPushButton *configAcceptSerial_2;
    QGroupBox *serialConfig;
    QPushButton *configAcceptSerial;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *ethernetButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *otherButton;
    QGroupBox *wifiConfig;
    QPushButton *configAcceptWifi;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *serialButton;
    QPushButton *wifiButton;
    QGroupBox *ethernetConfig;
    QPushButton *configAcceptEthernet;
    QLabel *label_5;
    QLineEdit *IPField;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *portField;

    void setupUi(QWidget *RaspUI)
    {
        if (RaspUI->objectName().isEmpty())
            RaspUI->setObjectName(QStringLiteral("RaspUI"));
        RaspUI->resize(930, 530);
        emptyConfig = new QGroupBox(RaspUI);
        emptyConfig->setObjectName(QStringLiteral("emptyConfig"));
        emptyConfig->setGeometry(QRect(40, 380, 491, 141));
        configAcceptSerial_2 = new QPushButton(emptyConfig);
        configAcceptSerial_2->setObjectName(QStringLiteral("configAcceptSerial_2"));
        configAcceptSerial_2->setGeometry(QRect(180, 100, 75, 23));
        serialConfig = new QGroupBox(RaspUI);
        serialConfig->setObjectName(QStringLiteral("serialConfig"));
        serialConfig->setEnabled(true);
        serialConfig->setGeometry(QRect(10, 100, 491, 141));
        configAcceptSerial = new QPushButton(serialConfig);
        configAcceptSerial->setObjectName(QStringLiteral("configAcceptSerial"));
        configAcceptSerial->setGeometry(QRect(200, 110, 75, 23));
        comboBox = new QComboBox(serialConfig);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 30, 41, 20));
        label_3 = new QLabel(serialConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 71, 16));
        ethernetButton = new QPushButton(RaspUI);
        ethernetButton->setObjectName(QStringLiteral("ethernetButton"));
        ethernetButton->setGeometry(QRect(120, 70, 81, 23));
        label = new QLabel(RaspUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        label_2 = new QLabel(RaspUI);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 201, 16));
        otherButton = new QPushButton(RaspUI);
        otherButton->setObjectName(QStringLiteral("otherButton"));
        otherButton->setGeometry(QRect(340, 70, 75, 23));
        wifiConfig = new QGroupBox(RaspUI);
        wifiConfig->setObjectName(QStringLiteral("wifiConfig"));
        wifiConfig->setGeometry(QRect(600, 290, 491, 141));
        configAcceptWifi = new QPushButton(wifiConfig);
        configAcceptWifi->setObjectName(QStringLiteral("configAcceptWifi"));
        configAcceptWifi->setGeometry(QRect(180, 100, 75, 23));
        label_6 = new QLabel(wifiConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 30, 71, 16));
        lineEdit_2 = new QLineEdit(wifiConfig);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 30, 113, 20));
        serialButton = new QPushButton(RaspUI);
        serialButton->setObjectName(QStringLiteral("serialButton"));
        serialButton->setGeometry(QRect(10, 70, 75, 23));
        wifiButton = new QPushButton(RaspUI);
        wifiButton->setObjectName(QStringLiteral("wifiButton"));
        wifiButton->setGeometry(QRect(230, 70, 75, 23));
        ethernetConfig = new QGroupBox(RaspUI);
        ethernetConfig->setObjectName(QStringLiteral("ethernetConfig"));
        ethernetConfig->setGeometry(QRect(30, 250, 491, 141));
        configAcceptEthernet = new QPushButton(ethernetConfig);
        configAcceptEthernet->setObjectName(QStringLiteral("configAcceptEthernet"));
        configAcceptEthernet->setGeometry(QRect(180, 100, 75, 23));
        label_5 = new QLabel(ethernetConfig);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 71, 16));
        IPField = new QLineEdit(ethernetConfig);
        IPField->setObjectName(QStringLiteral("IPField"));
        IPField->setGeometry(QRect(100, 30, 113, 20));
        label_7 = new QLabel(ethernetConfig);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 30, 71, 16));
        label_8 = new QLabel(ethernetConfig);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 60, 71, 16));
        portField = new QLineEdit(ethernetConfig);
        portField->setObjectName(QStringLiteral("portField"));
        portField->setGeometry(QRect(100, 60, 113, 20));

        retranslateUi(RaspUI);

        QMetaObject::connectSlotsByName(RaspUI);
    } // setupUi

    void retranslateUi(QWidget *RaspUI)
    {
        RaspUI->setWindowTitle(QApplication::translate("RaspUI", "Form", 0));
        emptyConfig->setTitle(QApplication::translate("RaspUI", "Configuration", 0));
        configAcceptSerial_2->setText(QApplication::translate("RaspUI", "Accept", 0));
        serialConfig->setTitle(QApplication::translate("RaspUI", "Configuration", 0));
        configAcceptSerial->setText(QApplication::translate("RaspUI", "Accept", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("RaspUI", "1", 0)
         << QApplication::translate("RaspUI", "2", 0)
         << QApplication::translate("RaspUI", "3", 0)
         << QApplication::translate("RaspUI", "4", 0)
         << QApplication::translate("RaspUI", "5", 0)
         << QApplication::translate("RaspUI", "6", 0)
         << QApplication::translate("RaspUI", "7", 0)
         << QApplication::translate("RaspUI", "8", 0)
         << QApplication::translate("RaspUI", "9", 0)
        );
        label_3->setText(QApplication::translate("RaspUI", "COM port:", 0));
        ethernetButton->setText(QApplication::translate("RaspUI", "Ethernet ", 0));
        label->setText(QApplication::translate("RaspUI", "Raspberry PI", 0));
        label_2->setText(QApplication::translate("RaspUI", "Please select a connection tye:", 0));
        otherButton->setText(QApplication::translate("RaspUI", "Other", 0));
        wifiConfig->setTitle(QApplication::translate("RaspUI", "Configuration", 0));
        configAcceptWifi->setText(QApplication::translate("RaspUI", "Accept", 0));
        label_6->setText(QApplication::translate("RaspUI", "Mac Adress:", 0));
        serialButton->setText(QApplication::translate("RaspUI", "Serial", 0));
        wifiButton->setText(QApplication::translate("RaspUI", "Wifi", 0));
        ethernetConfig->setTitle(QApplication::translate("RaspUI", "Configuration", 0));
        configAcceptEthernet->setText(QApplication::translate("RaspUI", "Accept", 0));
        label_5->setText(QApplication::translate("RaspUI", "IP Address:", 0));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("RaspUI", "Port: ", 0));
    } // retranslateUi

};

namespace Ui {
    class RaspUI: public Ui_RaspUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASPUI_H
