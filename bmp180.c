/*
    Project name : ESP8266 BMP180 Air Pressure Sensor Module
    Modified Date: 18-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-bmp180-air-pressure-sensor-module
*/

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

// Create an instance of the BMP180 sensor
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);

void setup() {
  Serial.begin(9600);
  // Initialize the sensor
  if (!bmp.begin()) {
    Serial.print("Could not find a valid BMP180 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  sensors_event_t event;
  bmp.getEvent(&event);
  if (event.pressure) {
    // Display the pressure
    Serial.print("Pressure: ");
    Serial.print(event.pressure);
    Serial.println(" hPa");

    // Calculate altitude assuming 'standard' barometric pressure of 1013.25 millibars
    float seaLevelPressure = SENSORS_PRESSURE_SEALEVELHPA;
    Serial.print("Altitude: ");
    Serial.print(bmp.pressureToAltitude(seaLevelPressure, event.pressure));
    Serial.println(" m");

    // Display the temperature
    float temperature;
    bmp.getTemperature(&temperature);
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");
  }
  else {
    Serial.println("Sensor error");
  }

  delay(2000); // Delay before the next reading
}
