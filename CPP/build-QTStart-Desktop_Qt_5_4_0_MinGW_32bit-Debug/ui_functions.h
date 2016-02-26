/********************************************************************************
** Form generated from reading UI file 'functions.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONS_H
#define UI_FUNCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Functions
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *blinkLED;
    QWidget *sensorsTab;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Functions)
    {
        if (Functions->objectName().isEmpty())
            Functions->setObjectName(QStringLiteral("Functions"));
        Functions->resize(586, 313);
        label = new QLabel(Functions);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 16));
        tabWidget = new QTabWidget(Functions);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 511, 211));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        blinkLED = new QPushButton(tab);
        blinkLED->setObjectName(QStringLiteral("blinkLED"));
        blinkLED->setGeometry(QRect(10, 10, 91, 31));
        tabWidget->addTab(tab, QString());
        sensorsTab = new QWidget();
        sensorsTab->setObjectName(QStringLiteral("sensorsTab"));
        pushButton_2 = new QPushButton(sensorsTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 111, 31));
        tabWidget->addTab(sensorsTab, QString());

        retranslateUi(Functions);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Functions);
    } // setupUi

    void retranslateUi(QWidget *Functions)
    {
        Functions->setWindowTitle(QApplication::translate("Functions", "Form", 0));
        label->setText(QApplication::translate("Functions", "Select Function", 0));
        blinkLED->setText(QApplication::translate("Functions", "BLINK LED", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Functions", "Actuators", 0));
        pushButton_2->setText(QApplication::translate("Functions", "Read Sensor", 0));
        tabWidget->setTabText(tabWidget->indexOf(sensorsTab), QApplication::translate("Functions", "Sensors", 0));
    } // retranslateUi

};

namespace Ui {
    class Functions: public Ui_Functions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONS_H
