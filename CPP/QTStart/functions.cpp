#include "functions.h"
#include "ui_functions.h"
#include "ard.h"


/*
 * @author Nathaniel Adefowora
 *
 * This class is where all the available functions of the fraemwork gets executed
 * What should happen here is that we've stored current configuration into some global file - xml, json and this class read that config file and executes based on the current config
 *
 * As easier, just as intuitive alternative is to simply pass the configuration along the menus as part of the contructor IE, when calling ArduinoUI, you pass along a created Ard instance
 * When calling the functions, you then pass it the SAME instance of ARD but with the specified configurations set. IE, Ard.configSerial(int comport) has already been called
 *
 * Once you click blink LED, based on that config file we execute
*/

Functions::Functions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Functions)
{
    ui->setupUi(this);
}

void Functions::setup(int choice){
    myChoice = choice;
}

//change that int i to rasp
void Functions::on_blinkLED_clicked()
{

    if (myChoice == 0){
        qDebug("Blink Clicked");
        arduino = new Ard();
        arduino->setupSerial();
        arduino->blink();
    }

    if (myChoice == 1){
        //I removed my write function :D its confusing GOOD LUCK :D
        server = new MyTcpServer(this);

    }

    //read json file to get proper parameters
    //for now, assume arduino


}

Functions::~Functions()
{
    delete ui;
}
