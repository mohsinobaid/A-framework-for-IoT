/********************************************************************************
** Form generated from reading UI file 'arduinoUI.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINOUI_H
#define UI_ARDUINOUI_H

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

class Ui_ArduinoUI
{
public:
    QLabel *label;
    QPushButton *ethernetButton;
    QPushButton *wifiButton;
    QLabel *label_2;
    QPushButton *serialButton;
    QPushButton *otherButton;
    QGroupBox *serialConfig;
    QPushButton *configAcceptSerial;
    QComboBox *comboBox;
    QLabel *label_3;
    QGroupBox *ethernetConfig;
    QPushButton *configAcceptEthernet;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QGroupBox *emptyConfig;
    QPushButton *configAcceptSerial_2;
    QGroupBox *wifiConfig;
    QPushButton *configAcceptWifi;
    QLabel *label_6;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *ArduinoUI)
    {
        if (ArduinoUI->objectName().isEmpty())
            ArduinoUI->setObjectName(QStringLiteral("ArduinoUI"));
        ArduinoUI->resize(528, 283);
        label = new QLabel(ArduinoUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 16));
        ethernetButton = new QPushButton(ArduinoUI);
        ethernetButton->setObjectName(QStringLiteral("ethernetButton"));
        ethernetButton->setGeometry(QRect(130, 70, 75, 23));
        wifiButton = new QPushButton(ArduinoUI);
        wifiButton->setObjectName(QStringLiteral("wifiButton"));
        wifiButton->setGeometry(QRect(240, 70, 75, 23));
        label_2 = new QLabel(ArduinoUI);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 201, 16));
        serialButton = new QPushButton(ArduinoUI);
        serialButton->setObjectName(QStringLiteral("serialButton"));
        serialButton->setGeometry(QRect(20, 70, 75, 23));
        otherButton = new QPushButton(ArduinoUI);
        otherButton->setObjectName(QStringLiteral("otherButton"));
        otherButton->setGeometry(QRect(350, 70, 75, 23));
        serialConfig = new QGroupBox(ArduinoUI);
        serialConfig->setObjectName(QStringLiteral("serialConfig"));
        serialConfig->setEnabled(true);
        serialConfig->setGeometry(QRect(20, 100, 491, 141));
        configAcceptSerial = new QPushButton(serialConfig);
        configAcceptSerial->setObjectName(QStringLiteral("configAcceptSerial"));
        configAcceptSerial->setGeometry(QRect(180, 100, 75, 23));
        comboBox = new QComboBox(serialConfig);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 30, 41, 20));
        label_3 = new QLabel(serialConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 71, 16));
        ethernetConfig = new QGroupBox(ArduinoUI);
        ethernetConfig->setObjectName(QStringLiteral("ethernetConfig"));
        ethernetConfig->setGeometry(QRect(600, 110, 491, 141));
        configAcceptEthernet = new QPushButton(ethernetConfig);
        configAcceptEthernet->setObjectName(QStringLiteral("configAcceptEthernet"));
        configAcceptEthernet->setGeometry(QRect(180, 100, 75, 23));
        label_5 = new QLabel(ethernetConfig);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 71, 16));
        lineEdit = new QLineEdit(ethernetConfig);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 30, 113, 20));
        emptyConfig = new QGroupBox(ArduinoUI);
        emptyConfig->setObjectName(QStringLiteral("emptyConfig"));
        emptyConfig->setGeometry(QRect(90, 320, 491, 141));
        configAcceptSerial_2 = new QPushButton(emptyConfig);
        configAcceptSerial_2->setObjectName(QStringLiteral("configAcceptSerial_2"));
        configAcceptSerial_2->setGeometry(QRect(180, 100, 75, 23));
        wifiConfig = new QGroupBox(ArduinoUI);
        wifiConfig->setObjectName(QStringLiteral("wifiConfig"));
        wifiConfig->setGeometry(QRect(610, 290, 491, 141));
        configAcceptWifi = new QPushButton(wifiConfig);
        configAcceptWifi->setObjectName(QStringLiteral("configAcceptWifi"));
        configAcceptWifi->setGeometry(QRect(180, 100, 75, 23));
        label_6 = new QLabel(wifiConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 30, 71, 16));
        lineEdit_2 = new QLineEdit(wifiConfig);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 30, 113, 20));

        retranslateUi(ArduinoUI);

        QMetaObject::connectSlotsByName(ArduinoUI);
    } // setupUi

    void retranslateUi(QWidget *ArduinoUI)
    {
        ArduinoUI->setWindowTitle(QApplication::translate("ArduinoUI", "Form", 0));
        label->setText(QApplication::translate("ArduinoUI", "Arduino", 0));
        ethernetButton->setText(QApplication::translate("ArduinoUI", "Ethernet ", 0));
        wifiButton->setText(QApplication::translate("ArduinoUI", "Wifi", 0));
        label_2->setText(QApplication::translate("ArduinoUI", "Please select a connection tye:", 0));
        serialButton->setText(QApplication::translate("ArduinoUI", "Serial", 0));
        otherButton->setText(QApplication::translate("ArduinoUI", "Other", 0));
        serialConfig->setTitle(QApplication::translate("ArduinoUI", "Configuration", 0));
        configAcceptSerial->setText(QApplication::translate("ArduinoUI", "Accept", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ArduinoUI", "1", 0)
         << QApplication::translate("ArduinoUI", "2", 0)
         << QApplication::translate("ArduinoUI", "3", 0)
         << QApplication::translate("ArduinoUI", "4", 0)
         << QApplication::translate("ArduinoUI", "5", 0)
         << QApplication::translate("ArduinoUI", "6", 0)
         << QApplication::translate("ArduinoUI", "7", 0)
         << QApplication::translate("ArduinoUI", "8", 0)
         << QApplication::translate("ArduinoUI", "9", 0)
        );
        label_3->setText(QApplication::translate("ArduinoUI", "COM port:", 0));
        ethernetConfig->setTitle(QApplication::translate("ArduinoUI", "Configuration", 0));
        configAcceptEthernet->setText(QApplication::translate("ArduinoUI", "Accept", 0));
        label_5->setText(QApplication::translate("ArduinoUI", "Mac Adress:", 0));
        emptyConfig->setTitle(QApplication::translate("ArduinoUI", "Configuration", 0));
        configAcceptSerial_2->setText(QApplication::translate("ArduinoUI", "Accept", 0));
        wifiConfig->setTitle(QApplication::translate("ArduinoUI", "Configuration", 0));
        configAcceptWifi->setText(QApplication::translate("ArduinoUI", "Accept", 0));
        label_6->setText(QApplication::translate("ArduinoUI", "Mac Adress:", 0));
    } // retranslateUi

};

namespace Ui {
    class ArduinoUI: public Ui_ArduinoUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINOUI_H
