#include "ard.h"
#include "QextSerialPort.h"

Ard::Ard()
{

}

void Ard::setupSerial(){
    port = new QextSerialPort("COM5"); //we create the port - windows
    //port = new QextSerialPort("/dev/tty.usbmodem1421"); //we create the port - unix
}

void Ard::blink(){
    qDebug("Blink Clicked");

    port->open(QIODevice::ReadWrite | QIODevice::Unbuffered); //we open the port
    if(!port->isOpen())
    {
        qDebug("port error: Impossible to open the port!");
    }

    //we set the port properties
    port->setBaudRate(BAUD9600);//modify the port settings on your own
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_1);
    port->write("1", 1);
}

Ard::~Ard()
{
      port->close();
}
