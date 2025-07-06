# bluetooth_car
Bluetooth controlled car using Arduino Uno, L298N motor driver, and HC-05 module. Controlled via mobile app using Bluetooth commands.

Electronics Project Series – 01

**Description**
This is a Bluetooth-controlled car using Arduino Uno, L298N Motor Driver, and HC-05 Bluetooth Module.  
It is wirelessly controlled via a mobile app using serial Bluetooth commands.

**Objective**
To demonstrate real-time control of a robotic car using embedded systems and wireless communication.

**Components Used**
- Arduino Uno  
- L298N Motor Driver  
- HC-05 Bluetooth Module  
- BO Motors × 4  
- Battery Pack  
- Jumper Wires  
- Mobile Phone (Bluetooth Terminal App)

**Arduino Code**
The Arduino code is available in the file: `bluetooth_car.ino`

**Bluetooth Commands**
- `F` → Move Forward  
- `B` → Move Backward  
- `L` → Turn Left  
- `R` → Turn Right  
- `S` → Stop the car

**Working Principle**
- The HC-05 module receives commands via Bluetooth from a mobile app.
- Arduino reads the commands using serial communication.
- It then sends motor control signals to the L298N driver.
- Depending on the command, the car moves forward, backward, left, right, or stops.
  
