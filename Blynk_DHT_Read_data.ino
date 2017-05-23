/*************************************************************
 
  This code reads temperature and Humidity parameters from DHT Sensor and pushesh this data into Blynk App using BLE(Bluetooth Low Energy). It uses VirtualPins to send data to App. 

  Author : U.Vinay Babu 
  Email:   ullivinaybabu@gmail.com 
  
  
  
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
 *************************************************************/

//#define BLYNK_USE_DIRECT_CONNECT

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <BlynkSimpleCurieBLE.h>
#include <CurieBLE.h>
#include "DHT.h"
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).

DHT dht(2, DHT11);
char auth[] = "0e29f361291c4de186366c8bb2704f21";

BLEPeripheral  blePeripheral;
BlynkTimer timer;

void setup()
{
  // Debug console
  Serial.begin(9600);
  delay(1000);
  blePeripheral.setLocalName("Blynk");
  blePeripheral.setDeviceName("Blynk");
  blePeripheral.setAppearance(384);

  Blynk.begin(blePeripheral, auth);

  blePeripheral.begin();

  Serial.println("Waiting for connections...");

  dht.begin();

 timer.setInterval(1000L,senddhtdata);
}

void senddhtdata()
{
  Blynk.virtualWrite(V0,dht.readTemperature());
  Blynk.virtualWrite(V1,dht.readHumidity());
}





void loop()
{
 // delay(2000);
  //float temp_data =dht.readTemperature();
 // float humidity_data=dht.readHumidity();
  
  
  
  blePeripheral.poll();
  Blynk.run();

  timer.run(); 


  
}

