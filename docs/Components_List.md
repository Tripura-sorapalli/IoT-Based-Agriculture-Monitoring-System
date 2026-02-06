# Components List and Justification
## 1.NodeMCU (ESP8266)
NodeMCU is a WiFi-enabled microcontroller used as the main processing unit of the system. 
It reads sensor data and transmits it to the IoT cloud platform via WiFi.
## 2.Arduino
Arduino is used to interface with sensors and collect raw data, which is then sent to NodeMCU for cloud transmission.
## 3.Soil Moisture Sensor
Measures the water content present in the soil.
It helps determine whether irrigation is required.
## 4.DHT11 Sensor
Measures temperature and humidity of the surrounding environment.
These parameters are essential for crop health monitoring.
## 5.LDR (Light Dependent Resistor)
Measures the intensity of sunlight falling on crops.
Helps analyze light exposure conditions.
## 6.Relay Module
Acts as a switch to control high-voltage devices like a water pump.
It enables automatic irrigation.
## 7.Water Pump
Supplies water to crops when soil moisture falls below a predefined threshold.
## 8.Power Supply
Provides necessary power to the Arduino, NodeMCU, and other components.
## 9.IoT Cloud Platform (ThingSpeak / Adafruit IO)
Used for storing, visualizing, and analyzing real-time agricultural data.
Allows remote monitoring from anywhere.

