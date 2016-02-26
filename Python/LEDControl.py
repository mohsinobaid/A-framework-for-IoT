import serial
import time

#ser = serial.Serial('COM7', 9600)

ser = serial.Serial('COM7', 9600, timeout=0, stopbits=serial.STOPBITS_TWO)

ser.write('1')

time.sleep(10)

ser.close()