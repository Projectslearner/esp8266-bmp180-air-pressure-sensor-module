# ESP8266 BMP180 Air Pressure Sensor Module Project

#### Project Overview
This project demonstrates how to interface the BMP180 air pressure sensor with an ESP8266 microcontroller to measure air pressure, altitude, and temperature. The data is then displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **BMP180 Air Pressure Sensor**
- **Jumper Wires**
- **Breadboard (optional)**

#### Circuit Setup
1. **Connecting the BMP180 to ESP8266:**
   - **VCC:** Connect to the 3.3V pin on the ESP8266.
   - **GND:** Connect to the GND pin on the ESP8266.
   - **SCL:** Connect to the D1 pin (GPIO 5) on the ESP8266.
   - **SDA:** Connect to the D2 pin (GPIO 4) on the ESP8266.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Install the necessary libraries (`Adafruit_Sensor` and `Adafruit_BMP085_Unified`).
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, open the Serial Monitor.
   - You should see the air pressure, altitude, and temperature data printed to the Serial Monitor every two seconds.

#### Code Explanation
- **Library Inclusions:** The code includes the `Wire`, `Adafruit_Sensor`, and `Adafruit_BMP085_Unified` libraries for I2C communication and sensor data handling.
- **Sensor Initialization:** The BMP180 sensor is initialized, and its status is checked.
- **Data Reading:** The `loop()` function continuously reads the sensor data and prints it to the Serial Monitor.

#### Applications
- **Weather Monitoring:** Monitor atmospheric pressure, altitude, and temperature for weather forecasting.
- **Altitude Measurement:** Use in drones or other devices where altitude monitoring is required.
- **Environmental Monitoring:** Track changes in environmental conditions for research and development purposes.

#### Notes
- **Calibration:** For accurate altitude readings, calibrate the sensor with the local sea-level pressure.
- **Power Supply:** Ensure a stable power supply to the ESP8266 and BMP180 sensor.

---

#### Useful Links
🌐 [ProjectsLearner](https://projectslearner.com/learn/esp8266-bmp180-air-pressure-sensor-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner