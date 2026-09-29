#include <Wire.h>
#include <MPU6050_tockn.h>
#include <Servo.h>

MPU6050 mpu6050(Wire);

Servo servoPitch; // D9 pin එකට (Up/Down Stabilization)
Servo servoRoll;  // D10 pin එකට (Left/Right Stabilization)

// Servos වල Center Position එක (Default 90 Degrees)
int pitchCenter = 90;
int rollCenter  = 90;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  // Servos Attach කිරීම
  servoPitch.attach(9);
  servoRoll.attach(10);

  // Default Center එකට Set කිරීම
  servoPitch.write(pitchCenter);
  servoRoll.write(rollCenter);

  // MPU6050 Initialize කිරීම
  mpu6050.begin();
  
  // Power ON කරන විට හැන්ද කෙළින් තබාගෙන සිටින්න (Calibrating)
  Serial.println("Calibrating Sensor... Hold Still!");
  mpu6050.calcGyroOffsets(false); 
  Serial.println("Ready to Stabilize!");
}

void loop() {
  mpu6050.update();

  // Sensor එකෙන් Angles ලබාගැනීම
  float currentPitch = mpu6050.getAngleY(); // Pitch angle
  float currentRoll  = mpu6050.getAngleX(); // Roll angle

  // Tremor එකට ප්‍රතිපක්ෂව Servo Positon ගණනය කිරීම
  // Sensor එක +15° ඇල වුනොත් Servo එක -15° ක් කැරකිය යුතුය
  int targetPitch = pitchCenter - currentPitch;
  int targetRoll  = rollCenter - currentRoll;

  // Servo limit එක (0 සිට 180 දක්වා පමණක් සීමා කිරීම)
  targetPitch = constrain(targetPitch, 10, 170);
  targetRoll  = constrain(targetRoll, 10, 170);

  // Servos වලට Signal එක ලබාදීම
  servoPitch.write(targetPitch);
  servoRoll.write(targetRoll);

  // කුඩා Delay එකක් රඳවා ගැනීම (Response Speed එක අනුව adjust කරගත හැක)
  delay(10); 
}