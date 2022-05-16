
const int buttonPin = 1; // digital pin 2 of arduino
const int ledPin = 13;    // digital pin 9 of ardiuino for led

//variable will change:
int x;
int buttonState = 0;     //variable for reading pushbutton status
int count_value = x = 0;
int preState = 0;

void setup() {
  //initialize the LED pin as output
  pinMode(ledPin , OUTPUT);
  // initialize the pushbuttonepin as an input
  pinMode(buttonPin , INPUT);

  Serial.begin(115200);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  //Check if pushButton is press or not , if it is pressed then button state is high
  if (buttonState == HIGH && preState == 0) {
    count_value = count_value + 1;
    Serial.println(count_value);
    // turn on led
    digitalWrite(ledPin , HIGH);
    delay(500);
    //Turn off led
    digitalWrite(ledPin , LOW);
    preState = 1;
  }
  else if (buttonState == LOW ) {
    preState = 0;
  }

}
