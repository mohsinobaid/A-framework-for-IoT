#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arduinoUI.h"
#include "mytcpserver.h"
#include "raspUI.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_arduinoButton_clicked();

    void on_raspButton_clicked();

    void on_otherButton_clicked();



private:
    Ui::MainWindow *ui;
    void setupImageButtons();
    ArduinoUI *ardUI;
    RaspUI *raspUI;
};

#endif // MAINWINDOW_H
