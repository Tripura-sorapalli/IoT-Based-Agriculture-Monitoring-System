# IoT Based Agriculture Monitoring System

## Project Overview
This project implements a smart agriculture monitoring system using Arduino and NodeMCU. The system monitors important environmental parameters such as soil moisture, temperature, humidity, and light intensity.

Sensor data is collected using Arduino and transmitted to the cloud using NodeMCU via WiFi. The system also performs automatic irrigation based on soil moisture levels.

---

## System Architecture

The system consists of two main units:

1. Arduino
   - Reads sensor data
   - Controls relay and water pump
   - Sends data to NodeMCU through serial communication

2. NodeMCU (ESP8266)
   - Connects to WiFi
   - Receives data from Arduino
   - Uploads data to ThingSpeak cloud platform

3. IoT Cloud Platform (ThingSpeak)
   - Stores real-time data
   - Displays graphical dashboard
   - Enables remote monitoring

---

## Components Used

- Arduino UNO
- NodeMCU (ESP8266)
- DHT11 Temperature and Humidity Sensor
- Soil Moisture Sensor
- LDR Sensor
- Relay Module
- Water Pump
- Power Supply
- ThingSpeak Cloud Platform

---

## Working Principle

1. Sensors measure soil moisture, temperature, humidity, and light intensity.
2. Arduino reads the sensor values.
3. Based on soil moisture threshold (30%), the relay controls the water pump.
4. Sensor data is transmitted to NodeMCU using serial communication.
5. NodeMCU sends the data to ThingSpeak using WiFi.
6. The cloud platform displays real-time graphs and stores historical data.

---

## Features

- Real-time environmental monitoring
- Automatic irrigation system
- Cloud-based data storage
- Remote access through web dashboard
- Efficient water usage

---

## Project Structure

Code/
- Arduino_Code.ino
- NodeMCU_Code.ino

docs/
- Components_List.md
- Data_Flow.md
- Control_Logic.md
- IoT_Platform.md
- Results_Observations.md

  
