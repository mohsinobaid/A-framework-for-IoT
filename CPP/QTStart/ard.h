#ifndef ARD_H
#define ARD_H

#include <qextserialport.h>
#include <string>

class Ard
{
public:
    Ard();
    ~Ard();
    void blink();
    void setupSerial();

private:
    QextSerialPort *port;
};

#endif // ARD_H
