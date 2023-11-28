#define leftsensor 2
#define rightsensor 3

#define left1 4
#define left2 5
#define right1 6
#define right2 7

void setup() {
  pinMode(leftsensor, INPUT);
  pinMode(rightsensor, INPUT);
  
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
}

void loop() {
  int leftSensorValue = digitalRead(leftsensor);
  int rightSensorValue = digitalRead(rightsensor);
  
  // If both sensors are on the line or off the line, move forward
  if (leftSensorValue == HIGH && rightSensorValue == HIGH)
  {
    // Move forward
    digitalWrite(left1, HIGH);
    digitalWrite(left2, LOW);
    digitalWrite(right1, HIGH);
    digitalWrite(right2, LOW);
  } 
  // If leftsensor sensor detects the line, turn rightsensor
  else if (leftSensorValue == HIGH && rightSensorValue == LOW) 
  {
    // Turn rightsensor
    digitalWrite(left1, HIGH);
    digitalWrite(left2, LOW);
    digitalWrite(right1, LOW);
    digitalWrite(right2, LOW);
  }
  // If rightsensor sensor detects the line, turn leftsensor
  else if (leftSensorValue == LOW && rightSensorValue == HIGH) 
  {
    // Turn leftsensor
    digitalWrite(left1, LOW);
    digitalWrite(left2, LOW);
    digitalWrite(right1, HIGH);
    digitalWrite(right2, LOW);
  }
    else if (leftSensorValue == LOW && rightSensorValue == LOW)
  {
    // Move forward
    digitalWrite(left1, LOW);
    digitalWrite(left2, LOW);
    digitalWrite(right1, LOW);
    digitalWrite(right2, LOW);
  } 
  
  // Add a delay to control the speed and responsiveness of the robot
  delay(50);
}
