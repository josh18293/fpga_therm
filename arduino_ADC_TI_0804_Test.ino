void setup() {

  Serial.begin(9600);

  pinMode(2, INPUT);          // sets the digital pins 2-9 (D-BUS) as inputs
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  pinMode(10, OUTPUT);        // sets the digital pin 10 (CS) as output 
  pinMode(11, OUTPUT);        // sets the digital pin 11 (WR) as output 
  pinMode(12, OUTPUT);        // sets the digital pin 12 (RD) as output 
  pinMode(13, INPUT);         // sets the digital pin 13 (INT) as input 

}

void loop() {
 
  digitalWrite(10, LOW);          // sets CS LOW
  digitalWrite(11, LOW);          // sets WR LOW
  delay(100);                     // waits for 0.1 seconds

  digitalWrite(10, HIGH);         // sets CS HIGH
  digitalWrite(11, HIGH);         // sets WR HIGH
  digitalWrite(13, LOW);          // sets INT LOW
  delay(100);                     // waits for 0.1 seconds

  digitalWrite(10, LOW);          // sets CS LOW
  digitalWrite(12, LOW);          // sets RD LOW

  (digitalRead(2)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(3)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(4)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(5)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(6)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(7)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(8)) ? Serial.print("1") : Serial.print("0");
  (digitalRead(9)) ? Serial.print("1") : Serial.print("0");
  Serial.print("\n\r");
  delay(100);                     // waits for 0.1 seconds

  digitalWrite(10, HIGH);         // sets CS HIGH
  digitalWrite(12, HIGH);         // sets RD HIGH
  digitalWrite(13, HIGH);         // sets INT HIGH
  delay(100);                     // waits for 0.1 seconds
}
