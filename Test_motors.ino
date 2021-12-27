// Motor A
int enA = 10;
int inA1 = 11;
int inA2 = 12;

// Motor B
int enB = 9;
int inB1 = 7;
int inB2 = 8;

void setup() {
  // put your setup code here, to run once:
  // Set all motors control pins to output
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(inA1, OUTPUT);
  pinMode(inA2, OUTPUT);
  pinMode(inB1, OUTPUT);
  pinMode(inB2, OUTPUT);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void move_back_stop() {
  // put your main code here, to run repeatedly:

  // Motor A
  digitalWrite(inA1, HIGH);
  digitalWrite(inA2, LOW);

  analogWrite(enA, 100); // speed from 0-255
  
  // Motor B
  digitalWrite(inB1, HIGH);
  digitalWrite(inB2, LOW);

  analogWrite(enB, 100); // speed from 0-255

  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);

  // Stop all motors
  digitalWrite(inA1, LOW);
  digitalWrite(inA2, LOW);
  digitalWrite(inB1, LOW);
  digitalWrite(inB2, LOW);


  digitalWrite(LED_BUILTIN, LOW);

  
  delay(2000);
  
}


void turn_left_stop() {
  // put your main code here, to run repeatedly:

  // Motor B
  digitalWrite(inB1, HIGH);
  digitalWrite(inB2, LOW);

  analogWrite(enB, 100); // speed from 0-255

  // Motor A
  digitalWrite(inA1, HIGH);
  digitalWrite(inA2, LOW);

  analogWrite(enA, 80); // speed from 0-255
  


  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);

  // Stop all motors

  digitalWrite(inB1, LOW);
  digitalWrite(inB2, LOW);

  digitalWrite(inA1, LOW);
  digitalWrite(inA2, LOW);


  digitalWrite(LED_BUILTIN, LOW);

  
  delay(3000);
  
}


void turn_right_stop() {
  // put your main code here, to run repeatedly:

  // Motor A
  digitalWrite(inA1, HIGH);
  digitalWrite(inA2, LOW);

  analogWrite(enA, 100); // speed from 0-255

  // Motor B
  digitalWrite(inB1, HIGH);
  digitalWrite(inB2, LOW);

  analogWrite(enB, 130); // speed from 0-255




  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);

  // Stop all motors

  digitalWrite(inB1, LOW);
  digitalWrite(inB2, LOW);

  digitalWrite(inA1, LOW);
  digitalWrite(inA2, LOW);


  digitalWrite(LED_BUILTIN, LOW);

  
  delay(5000);
  
}



void move_straight_stop() {
  // put your main code here, to run repeatedly:

  // Motor B
  digitalWrite(inB1, HIGH);
  digitalWrite(inB2, LOW);

  analogWrite(enB, 120); // speed from 0-255

  // Motor A
  digitalWrite(inA1, HIGH);
  digitalWrite(inA2, LOW);

  analogWrite(enA, 120); // speed from 0-255
  


  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);

  // Stop all motors

  digitalWrite(inB1, LOW);
  digitalWrite(inB2, LOW);

  digitalWrite(inA1, LOW);
  digitalWrite(inA2, LOW);


  digitalWrite(LED_BUILTIN, LOW);

  
  delay(3000);
  
}



void loop_stop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);

  // Stop all motors
  digitalWrite(inA1, LOW);
  digitalWrite(inA2, LOW);
  digitalWrite(inB1, LOW);
  digitalWrite(inB2, LOW);

  while (true);

    digitalWrite(LED_BUILTIN, LOW);

    delay(2000);
  
}

void loop() {
  turn_right_stop();
  move_straight_stop();
  turn_left_stop();
  loop_stop();
}
