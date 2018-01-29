/*************************************************************
Author: Vinay 
Email: ullivinaybabu@gmail.com 

In this example ,we wrote a code to control 6 different servo motors connected at different pins in arduino 101 
You can control these servo motors using BLYNK IOT Mobile App by adding various widgets and works over BLE Network. 
  
  
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Social networks:            http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  Note: This requires CurieBLE library
    from http://librarymanager/all#CurieBLE

  Warning: Bluetooth support is in beta!

define servo motors and pins here and work on it. 
  
 *************************************************************/

//#define BLYNK_USE_DIRECT_CONNECT

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <BlynkSimpleCurieBLE.h>
#include <CurieBLE.h>
#include <Servo.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "9e385e9c913742c991097ba6ff30e3fc";
int paddy=0;
int sugar_cane=0;
int ground_nut=0;
int wheet=0;
BLEPeripheral  blePeripheral;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;



BLYNK_WRITE(V0) //Button Widget is writing to pin V1
{
  sugar_cane = param.asInt(); 
  Serial.print("sugarcane data       ");
  Serial.println(sugar_cane);
  Serial.print("paddy data       ");
  Serial.println(paddy);
  Serial.print("groundnut data       ");
  Serial.println(ground_nut);
  Serial.print("wheet data       ");
  Serial.println(wheet);

if(sugar_cane==1 && paddy ==0 && ground_nut ==0 && wheet==0)
{
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  Serial.println("Water Supplied to Sugarcane Field ");
}
else if(sugar_cane==0 && paddy ==1 && ground_nut ==0 && wheet==0)
{
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(0);
  myservo6.write(0);  
Serial.println("Water Supplied to Paddy Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==1 && wheet==0)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(180);
  myservo6.write(0);
  Serial.println("Water Supplied to Groundnut Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==0 && wheet==1)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(180);
  Serial.println("Water Supplied to wheet Field ");
}
else 
{
  
}




}
BLYNK_WRITE(V1) //Button Widget is writing to pin V1
{
  paddy = param.asInt(); 
  Serial.print("sugarcane data       ");
  Serial.println(sugar_cane);
  Serial.print("paddy data       ");
  Serial.println(paddy);
  Serial.print("groundnut data       ");
  Serial.println(ground_nut);
  Serial.print("wheet data       ");
  Serial.println(wheet);


if(sugar_cane==1 && paddy ==0 && ground_nut ==0 && wheet==0)
{
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  Serial.println("Water Supplied to Sugarcane Field ");
}
else if(sugar_cane==0 && paddy ==1 && ground_nut ==0 && wheet==0)
{
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(0);
  myservo6.write(0);  
Serial.println("Water Supplied to Paddy Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==1 && wheet==0)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(180);
  myservo6.write(0);
  Serial.println("Water Supplied to Groundnut Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==0 && wheet==1)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(180);
  Serial.println("Water Supplied to wheet Field ");
}
else 
{
  
}

  
}
BLYNK_WRITE(V2) //Button Widget is writing to pin V1
{
  ground_nut = param.asInt(); 
  Serial.print("sugarcane data       ");
  Serial.println(sugar_cane);
  Serial.print("paddy data       ");
  Serial.println(paddy);
  Serial.print("groundnut data       ");
  Serial.println(ground_nut);
  Serial.print("wheet data       ");
  Serial.println(wheet);

if(sugar_cane==1 && paddy ==0 && ground_nut ==0 && wheet==0)
{
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  Serial.println("Water Supplied to Sugarcane Field ");
}
else if(sugar_cane==0 && paddy ==1 && ground_nut ==0 && wheet==0)
{
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(0);
  myservo6.write(0);  
Serial.println("Water Supplied to Paddy Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==1 && wheet==0)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(180);
  myservo6.write(0);
  Serial.println("Water Supplied to Groundnut Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==0 && wheet==1)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(180);
  Serial.println("Water Supplied to wheet Field ");
}
else 
{
  
}
}
BLYNK_WRITE(V3) //Button Widget is writing to pin V1
{
  wheet = param.asInt(); 
  Serial.print("sugarcane data       ");
  Serial.println(sugar_cane);
  Serial.print("paddy data       ");
  Serial.println(paddy);
  Serial.print("groundnut data       ");
  Serial.println(ground_nut);
  Serial.print("wheet data       ");
  Serial.println(wheet);

if(sugar_cane==1 && paddy ==0 && ground_nut ==0 && wheet==0)
{
  myservo1.write(180);
  myservo2.write(180);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  Serial.println("Water Supplied to Sugarcane Field ");
}
else if(sugar_cane==0 && paddy ==1 && ground_nut ==0 && wheet==0)
{
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);
  myservo4.write(180);
  myservo5.write(0);
  myservo6.write(0);  
Serial.println("Water Supplied to Paddy Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==1 && wheet==0)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(180);
  myservo6.write(0);
  Serial.println("Water Supplied to Groundnut Field ");
}
else if(sugar_cane==0 && paddy ==0 && ground_nut ==0 && wheet==1)
{
    myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(180);
  Serial.println("Water Supplied to wheet Field ");
}
else 
{
  
}
}
void setup()
{
  // Debug console
  Serial.begin(9600);
  
  delay(1000);
myservo1.attach(5);
myservo2.attach(6);
myservo3.attach(7);
myservo4.attach(8);
myservo5.attach(9);
myservo6.attach(10);
  blePeripheral.setLocalName("Blynk");
  blePeripheral.setDeviceName("Blynk");
  blePeripheral.setAppearance(384);

  Blynk.begin(blePeripheral, auth);

  blePeripheral.begin();

  Serial.println("Waiting for connections...");
}

void loop()
{
  blePeripheral.poll();
  Blynk.run();
  
}

