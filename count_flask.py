import serial
from flask import Flask


app = Flask(__name__)

Arduino = serial.Serial("/dev/ttyACM0",baudrate = 115200)

@app.route("/home/<score>")
def home(score):
    while True:
        score = Arduino.readline().decode('ascii')
        return f"{score}"


app.run(debug=True)
