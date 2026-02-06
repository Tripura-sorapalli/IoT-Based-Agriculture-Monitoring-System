# Control Logic

## 1. Irrigation Control Logic

Condition:
- If Soil Moisture < 30%

Action:
- Relay Module = ON
- Water Pump = ON

Else:
- Relay Module = OFF
- Water Pump = OFF


## 2. Temperature Monitoring Logic

Condition:
- If Temperature > 40°C

Action:
- High Temperature Alert displayed on IoT Dashboard


## 3. Humidity Monitoring Logic

Condition:
- If Humidity < 40%

Action:
- Low Humidity Alert displayed


## 4. Light Intensity Monitoring Logic

Condition:
- If Light Intensity < Threshold Value

Action:
- Data logged for crop growth analysis


## 5. Cloud Update Logic

- Sensor data updated to IoT Cloud every 15 seconds
- Dashboard reflects real-time data

