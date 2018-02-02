

/////////////////////////////////////////////////////
//                                                 //
// Hetty Version: 3.0 Beta                         //
// File name: HettyV3_BETA_.ino                    //
// Author: Luke Dixon                              //
// Created on: 20/01/2018                          //
// With many thanks to: Djp                        //
//                                                 //
/////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Library's////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Include I2C Library
#include <LiquidCrystal_I2C.h>
#include <Wire.h>


// Include
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);


// Include DHT Library
#include <dht.h>

#include <EEPROM.h>
#define DHTLIB_INVALID_VALUE    -999


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Buttons setup
int Down = 2;
int Up = 3;
int Enter = 4;
int Home = 5;


// Setting up state's
int upState = 0;
int downState = 0;
int enterState = 0;
int homeState = 0;


// Setup Old State's
int oldUpState = 0;
int oldDownState = 0;
int oldEnterState = 0;
int oldHomeState = 0;


// Int Switch Case
int mainmenu = 1;


// Setup 2 LDR's
int pinLDR1 = A1;
int pinLDR2 = A2;


// Setup Values LDR

int LDR1 = 0;
int LDR2 = 0;

unsigned long LDR1previousMillis;
unsigned long LDR2previousMillis;


// Setup Old Values
int oldLDR1;
int oldLDR2;


// Setup DHT11 Sensor
dht DHT;
#define DHT11_pin 6


//Setup Config Temperature
float configTemp = 19;
float oldConfigTemp;

// Setup Config Humidity
float configHumid = 40;
float oldConfigHumid;

// Setup Status LED's

int rLED = 8;
int humidLED = 25;
int servoLED = 7;


// Cooling variables
int coolStatus;
int oldCoolStatus;

//EEPROM variable
int adrsTemp = 2;
int adrsHumid = 3;


//DHT Fix
int oldShowTemp = 0;
int oldShowHumid = 0;
int showTemp;
int showHumid;
const long interval = 3000; //interval DHT
unsigned long previousMillis = 0;
const long interval2 = 3000;
unsigned long previousMillis2 = 0;

int chk;


//Light Simulation
int led1 = 9;
int led2 = 10;
int led3 = 11;

//PIR
int PIR = 0;
int PIRstate = LOW;
int PIRpin = 12;

//fan
int fan = 22;



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







void setup() {
  unsigned long currentMillis = millis();
  unsigned long currentMillis2 = millis();
  unsigned long LDR1currentMillis = millis();
  unsigned long LDR2currentMillis = millis();
  dhtFix();
  lcdUpdate();
  lcd.begin(16, 2); //LCD setup
  lcd.setBacklight(HIGH); //Turn backlight on
  Serial.begin(9600);
  Serial1.begin(9600);//Turn on
  lcd.setCursor(0, 0); // Set Cursor to 0,0
  lcd.print("Welcome"); // Message
  Serial.println("Welcome to the Bugfix interface"); // Message
  lcd.setCursor(0, 1); // Set cursor to second row
  lcd.print("Version:3.0 BETA"); // Message
  delay(1000); //delay
  mainmenu = 1; // set switch case to 1
  mainMenu(); // call main menu
  Serial.print(" LDR1:");
  Serial.println(LDR1);
  configTemp = EEPROM.read(adrsTemp);
  configHumid = EEPROM.read(adrsHumid);
  Serial.println("main menu updated"); //message
  lcdUpdate(); // Call void lcdUpdate


  
  pinMode (pinLDR1, INPUT);
  pinMode (pinLDR2, INPUT);
  pinMode(rLED, OUTPUT); // Setup red LED
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(PIRpin, INPUT);  //Setup
  pinMode(fan, OUTPUT);
  pinMode(humidLED, OUTPUT);
  pinMode(servoLED, OUTPUT);
  
}

void loop() {
  dhtFix();
  ldrUpdate();
  
  PIR = digitalRead(PIRpin);
  upState = digitalRead(Up);
  downState = digitalRead(Down);
  enterState = digitalRead(Enter);
  homeState = digitalRead(Home);

  //////////////////////////////////////////////////////////////////////////////////////////////////////////State Change detection////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (oldUpState != upState) {
    mainMenu();
    oldUpState = upState;
    Serial.println(" Up button resetted");
    delay(50);
  }

  if (oldDownState != downState) {
    mainMenu();
    oldDownState = downState;
    Serial.println(" Down button resetted");
    delay(50);
  }

  if (oldEnterState != enterState) {
    mainMenu();
    oldEnterState = enterState;
    Serial.println(" Enter button resetted");
    delay(50);
  }


  if (oldHomeState != homeState) {
    mainMenu();
    oldHomeState = homeState;
    Serial.println(" Home button resetted");
    delay(50);
  }

  if (oldConfigTemp != configTemp) {
    oldConfigTemp = configTemp;
    EEPROM.write(adrsTemp, configTemp);
    Serial.print("tempEEPROM:");
    Serial.println(configTemp);
    mainMenu();
    lcdUpdate();
  }

  if (oldConfigHumid != configHumid) {
    oldConfigHumid = configHumid;
    EEPROM.write(adrsHumid, configHumid);
    Serial.print("vochtEEPROM:");
    Serial.println(configHumid);
    mainMenu();
    lcdUpdate();

  }

  if (configTemp > showTemp) {
    digitalWrite(rLED, HIGH);
   // Serial.println("red led on");

  }

 if (configHumid < showHumid) {
  digitalWrite(humidLED, HIGH);
  
 }

  if (configHumid == showHumid) {
    digitalWrite(humidLED, LOW);
  }

    if (configTemp < showTemp) {
      digitalWrite(fan, HIGH);
    }

    if (PIR == HIGH && LDR2 < 600) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      
      Serial.println("motion detected");
    }
 
    if (configTemp == showTemp) {
       digitalWrite(fan, LOW); 
       digitalWrite(rLED, LOW);
    }
 if (PIR == LOW && LDR2 > 600) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      
      
    }

}


