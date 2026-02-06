# Data Flow Explanation

## Step 1: Data Collection
The soil moisture sensor, DHT11 sensor, and LDR collect environmental data such as soil moisture, temperature, humidity, and sunlight intensity.

## Step 2: Processing
The NodeMCU (ESP8266) reads the sensor values through its GPIO pins.

## Step 3: WiFi Transmission
Using built-in WiFi, the NodeMCU sends the collected data to the IoT cloud platform (ThingSpeak / Adafruit IO).

## Step 4: Cloud Storage
The IoT platform stores the received data in cloud channels and updates it in real time.

## Step 5: Dashboard Visualization
The stored data is displayed in graphical format on a web dashboard for remote monitoring.

## Step 6: Automatic Control
If soil moisture falls below a predefined threshold, the NodeMCU activates the relay module to turn on the water pump for irrigation.

## Step 7: Alert Generation
The system can generate alerts when environmental conditions exceed safe limits.

