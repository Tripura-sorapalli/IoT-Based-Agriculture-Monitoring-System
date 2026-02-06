# IoT Platform Configuration

## 1. Platform Used
ThingSpeak (or Adafruit IO)

## 2. Purpose
The IoT platform is used to:
- Store real-time sensor data
- Visualize environmental parameters
- Monitor farm conditions remotely
- Generate alerts when threshold limits are crossed

## 3. Data Fields Configured

Field 1 – Temperature  
Field 2 – Humidity  
Field 3 – Soil Moisture  
Field 4 – Light Intensity  

## 4. Data Transmission Process

- NodeMCU connects to WiFi network.
- API Key is used to authenticate the device.
- Sensor data is sent to the cloud using HTTP protocol.
- Data is updated at regular intervals (every 15 seconds).

## 5. Dashboard Features

- Real-time graphical visualization
- Historical data analysis
- Remote access from anywhere
- Alert indication for abnormal conditions
