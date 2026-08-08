//PROJECT SMART IRRIGATION SYSTEM IS FOR AGRICULTURE TO MONITORING THE FIELDS AND ALERTING, AUTOMATING BY USING INTERNET OF THINGS
//Code Was written by Arunkumar G
//I made a few small changes to the code using GPT 3.5
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <DHT.h>

// BLYNK DETAILS

char auth[] = "adnuieWhAtsupbIatchhsdoJD37Aj";
char ssid[] = "UCEA_23";
char pass[] = "UCEA_23EEE";

// PIN DEFINITIONS


// DS18B20
#define ONE_WIRE_BUS D2

// DHT11
#define DHTPIN 2
#define DHTTYPE DHT11

// PIR Motion Sensor
#define PIR_PIN D6

// Rain Drop Sensor - DIGITAL OUTPUT
#define RAIN_PIN D5

// Soil Moisture Sensor
#define SOIL_PIN A0

// Pump Relay
#define PUMP_PIN D7

// SENSOR OBJECTS


OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;

// VARIABLES
bool pumpState = false;

int soilValue = 0;
int moisturePercent = 0;

int pirState = 0;
int rainState = 0;

float ds18b20Temp = 0;
float dhtTemp = 0;
float humidity = 0;

// PUMP CONTROL
// Blynk Button V7
// Set Blynk button to SWITCH mode

BLYNK_WRITE(V7)
{
  int value = param.asInt();

  if (value == 1)
  {
    pumpState = true;

    // Most relay modules are ACTIVE LOW
    digitalWrite(PUMP_PIN, LOW);

    Serial.println("PUMP ON");
  }
  else
  {
    pumpState = false;

    digitalWrite(PUMP_PIN, HIGH);

    Serial.println("PUMP OFF");
  }
}


// DHT11 SENSOR


void readDHT()
{
  humidity = dht.readHumidity();
  dhtTemp = dht.readTemperature();

  if (isnan(humidity) || isnan(dhtTemp))
  {
    Serial.println("Failed to read DHT11!");
    return;
  }

  Serial.print("DHT Temperature: ");
  Serial.print(dhtTemp);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Blynk
  Blynk.virtualWrite(V5, humidity);
  Blynk.virtualWrite(V6, dhtTemp);
}

// SOIL + DS18B20


void readSoilAndTemperature()
{
  // Soil Moisture
  

  soilValue = analogRead(SOIL_PIN);

  // Convert ADC value to percentage
  // Adjust these values according to sensor
  moisturePercent = map(soilValue, 1023, 0, 0, 100);

  moisturePercent = constrain(moisturePercent, 0, 100);

  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println(" %");

  // DS18B20
 

  sensors.requestTemperatures();

  ds18b20Temp = sensors.getTempCByIndex(0);

  Serial.print("DS18B20 Temperature: ");
  Serial.print(ds18b20Temp);
  Serial.println(" °C");


  // Blynk

  Blynk.virtualWrite(V1, ds18b20Temp);
  Blynk.virtualWrite(V2, moisturePercent);
}

// PIR SENSOR


void readPIR()
{
  pirState = digitalRead(PIR_PIN);

  if (pirState == HIGH)
  {
    Serial.println("Motion Detected!");
  }
  else
  {
    Serial.println("No Motion");
  }

  Blynk.virtualWrite(V3, pirState);
}

// RAIN SENSOR


void readRain()
{
  rainState = digitalRead(RAIN_PIN);

  /*
     DO = LOW  -> Rain detected
     DO = HIGH -> No rain

  */

  if (rainState == LOW)
  {
    Serial.println("RAIN DETECTED!");

    Blynk.virtualWrite(V4, 1);
  }
  else
  {
    Serial.println("NO RAIN");

    Blynk.virtualWrite(V4, 0);
  }
}

// PRINT STATUS

void printStatus()
{
  Serial.println();
  Serial.println("========== SYSTEM STATUS ==========");

  Serial.print("Soil Moisture : ");
  Serial.print(moisturePercent);
  Serial.println(" %");

  Serial.print("DS18B20 Temp  : ");
  Serial.print(ds18b20Temp);
  Serial.println(" °C");

  Serial.print("DHT11 Temp    : ");
  Serial.print(dhtTemp);
  Serial.println(" °C");

  Serial.print("Humidity      : ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("PIR           : ");

  if (pirState)
    Serial.println("MOTION");
  else
    Serial.println("NO MOTION");

  Serial.print("Rain          : ");

  if (rainState == LOW)
    Serial.println("RAIN");
  else
    Serial.println("NO RAIN");

  Serial.print("Pump          : ");

  if (pumpState)
    Serial.println("ON");
  else
    Serial.println("OFF");

  Serial.println("===================================");
  Serial.println();
}
// SETUP

void setup()
{
  Serial.begin(9600);

  // Sensor initialization
  dht.begin();
  sensors.begin();

  // GPIO configuration
  pinMode(PIR_PIN, INPUT);
  pinMode(RAIN_PIN, INPUT);

  pinMode(PUMP_PIN, OUTPUT);

  // Pump OFF at startup
  digitalWrite(PUMP_PIN, HIGH);

  Serial.println();
  Serial.println("Smart Monitoring System Starting...");

  // Blynk connection
  Blynk.begin(auth, ssid, pass);

  // Timers
  timer.setInterval(2000L, readDHT);
  timer.setInterval(2000L, readSoilAndTemperature);
  timer.setInterval(1000L, readPIR);
  timer.setInterval(1000L, readRain);
  timer.setInterval(5000L, printStatus);
}

// LOOP
void loop()
{
  Blynk.run();
  timer.run();
}
