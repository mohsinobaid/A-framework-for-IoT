/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *welcomeLabel;
    QLabel *selectMessage;
    QPushButton *arduinoButton;
    QPushButton *raspButton;
    QPushButton *otherButton;
    QPushButton *goButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(541, 250);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        welcomeLabel = new QLabel(centralWidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(10, 10, 271, 16));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Fax"));
        font.setBold(true);
        font.setWeight(75);
        welcomeLabel->setFont(font);
        selectMessage = new QLabel(centralWidget);
        selectMessage->setObjectName(QStringLiteral("selectMessage"));
        selectMessage->setGeometry(QRect(10, 50, 301, 16));
        arduinoButton = new QPushButton(centralWidget);
        arduinoButton->setObjectName(QStringLiteral("arduinoButton"));
        arduinoButton->setGeometry(QRect(30, 100, 141, 101));
        arduinoButton->setStyleSheet(QStringLiteral(""));
        raspButton = new QPushButton(centralWidget);
        raspButton->setObjectName(QStringLiteral("raspButton"));
        raspButton->setGeometry(QRect(200, 100, 141, 101));
        raspButton->setStyleSheet(QStringLiteral(""));
        otherButton = new QPushButton(centralWidget);
        otherButton->setObjectName(QStringLiteral("otherButton"));
        otherButton->setGeometry(QRect(370, 100, 141, 101));
        goButton = new QPushButton(centralWidget);
        goButton->setObjectName(QStringLiteral("goButton"));
        goButton->setGeometry(QRect(210, 220, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IoT Framework", 0));
        welcomeLabel->setText(QApplication::translate("MainWindow", "Welcome To The Framework", 0));
        selectMessage->setText(QApplication::translate("MainWindow", "To start please select a microcontroller below:", 0));
        arduinoButton->setText(QString());
        raspButton->setText(QString());
        otherButton->setText(QApplication::translate("MainWindow", "Others", 0));
        goButton->setText(QApplication::translate("MainWindow", "Go", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
