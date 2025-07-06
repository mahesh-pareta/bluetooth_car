char command;

// Motor driver input pins
#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

void setup() {
  // Set motor pins as OUTPUT
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Begin Serial Communication at 9600 baud
  Serial.begin(9600);

  // Print initial instructions to Serial Monitor
  Serial.println("Bluetooth Car Ready");
  Serial.println("Send F=Forward, B=Backward, L=Left, R=Right, S=Stop");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();  // Read incoming Bluetooth command

    Serial.print("Received Command: ");
    Serial.println(command);

    switch (command) {
      case 'F':
        // Forward
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        Serial.println("Action: Moving Forward");
        break;

      case 'B':
        // Backward
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        Serial.println("Action: Moving Backward");
        break;

      case 'L':
        // Turn Left
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        Serial.println("Action: Turning Left");
        break;

      case 'R':
        // Turn Right
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        Serial.println("Action: Turning Right");
        break;

      case 'S':
        // Stop
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        Serial.println("Action: Stop");
        break;

      default:
        Serial.println("Warning: Invalid Command");
        break;
    }
  }
}
