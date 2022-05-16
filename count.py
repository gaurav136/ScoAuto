import serial
Arduino = serial.Serial("/dev/ttyACM0",baudrate = 115200)

while True:
    count = Arduino.readline().decode('ascii')
    print(count)

