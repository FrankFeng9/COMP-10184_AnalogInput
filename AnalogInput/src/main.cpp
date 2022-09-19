#include <Arduino.h>

//I Yizhe Feng, 000798153 certify that this material is my original work. No other person's work has been used without due acknowledgement. 
//I have not made my work available to anyone else.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

 int iVal; 
 float fVal;
 float temperature;
 
  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0); 
 
  // print value to the USB port 
  fVal = float(iVal/310.0);
  
  //Serial.println("Digitized Value of " + String(iVal) + " is equivalent to an Analog Voltage = "+ String(fVal)+ "v"); 
 
  
   //convert Digitized Value to temperature
   temperature =  fVal * (50.0/3.3);

   //output Temperature and judgement
   if(temperature< 10){
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Cold!"); 
   }else if(temperature >= 10 and temperature <= 15){
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Cool"); 
   }else if(temperature >=15 and temperature <= 25){
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Perfect"); 
   }else if(temperature >=25 and temperature <= 30){
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Warm"); 
   }else if(temperature >=30 and temperature <= 35){
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Hot"); 
   }else{
    Serial.println("Digitized output of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " deg. C, which is Too Hot!"); 
   }

  // wait 2 seconds (2000 ms) 
  delay(2000); 




}