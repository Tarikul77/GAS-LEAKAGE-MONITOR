
const int analogInPin0 = A0;
float sensorValue;
float voltageValue;
 



void setup() {
  
  Serial.begin(9600);
}
 
void loop() {
  readSensors();
  getVoltageValue();

  sendAndroidValues();
 
  delay(2000);
}
 
void readSensors()
{
 
  sensorValue= analogRead(analogInPin0);
 
}

void sendAndroidValues()
 {
  
 
    Serial.print(voltageValue);
   Serial.println();
 delay(10);       
}
 

void getVoltageValue()
{
  
    voltageValue = ((sensorValue/1023)*5);
  
}
