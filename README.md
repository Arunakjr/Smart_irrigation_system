# 🌱 Smart Irrigation System Using Blynk

### *IoT-Based Automated Irrigation and Plant Monitoring System*

An intelligent IoT-based **Smart Irrigation System** designed to automate plant watering by monitoring soil moisture and environmental conditions. The system uses a **NodeMCU ESP8266**, multiple sensors, a water pump, and the **Blynk IoT platform** to provide automated irrigation and remote monitoring.

The system is designed for applications such as **agriculture, terrace gardening, home gardens, commercial landscapes, and sports fields**.

---

## 📋 Table of Contents

* [Overview](#-overview)
* [Problem Statement](#-problem-statement)
* [Objectives](#-objectives)
* [Features](#-features)
* [Components Used](#️-components-used)
* [System Architecture](#️-system-architecture)
* [How It Works](#️-how-it-works)
* [Installation & Setup](#-installation--setup)
* [Blynk IoT Application](#-blynk-iot-application)
* [Sensor Operations](#-sensor-operations)
* [Pump Control](#-pump-control)
* [Power System](#-power-system)
* [Applications](#-applications)
* [Advantages](#-advantages)
* [Limitations](#️-limitations)
* [Testing & Evaluation](#-testing--evaluation)
* [Future Enhancements](#-future-enhancements)
* [Maintenance & Safety](#-maintenance--safety)
* [Project Gallery](#-project-gallery)
* [Troubleshooting](#-troubleshooting)
* [Team Members](#-team-members)
* [References](#-references)
* [Project Achievements](#-project-achievements)
* [License](#-license)
* [Acknowledgments](#-acknowledgments)

---

## 🎯 Overview

Traditional irrigation methods often depend on manual watering, which can result in **water wastage, over-irrigation, under-irrigation, and unnecessary human effort**.

The proposed Smart Irrigation System addresses these problems using IoT technology.

The system continuously monitors the soil and surrounding environmental conditions using sensors. The **NodeMCU ESP8266** processes the sensor information and controls the irrigation system.

When the soil moisture level becomes low, the system can automatically activate the water pump. Sensor information can also be monitored remotely through the **Blynk mobile application**.

### Project Information

| Parameter                 | Details                        |
| ------------------------- | ------------------------------ |
| **Project Name**          | Smart Irrigation System        |
| **Controller**            | NodeMCU ESP8266                |
| **IoT Platform**          | Blynk                          |
| **Primary Sensor**        | Soil Moisture Sensor           |
| **Environmental Sensors** | Temperature & Humidity Sensors |
| **Rain Detection**        | Raindrop Sensor                |
| **Motion Detection**      | PIR Motion Sensor              |
| **Actuator**              | 24V DC Water Pump              |
| **Power Options**         | Battery / Solar / Direct Power |
| **Project Type**          | IoT / Embedded System          |
| **Status**                | ✅ Academic Prototype           |

---

## ❗ Problem Statement

### Key Problems Addressed

* 💧 **Water Wastage:** Manual irrigation can supply more water than plants actually require.
* 🌱 **Improper Irrigation:** Plants may not receive water according to actual soil moisture conditions.
* 👨‍🌾 **Manual Effort:** Continuous manual monitoring and watering requires time and effort.
* 🌧️ **Unnecessary Watering During Rain:** Irrigation should be reduced or stopped when rainfall is detected.
* 📱 **Lack of Remote Monitoring:** Traditional systems generally do not provide mobile-based monitoring.
* 🌡️ **Environmental Monitoring:** Temperature and humidity conditions can provide useful information about the plant environment.
* 🔌 **Pump Automation:** Manual pump operation can be replaced with automated control.

---

## 🎯 Objectives

The main objectives of this project are:

1. Monitor soil moisture continuously.
2. Automatically irrigate plants when the soil becomes dry.
3. Reduce unnecessary water consumption.
4. Monitor temperature and humidity.
5. Detect rainfall using a raindrop sensor.
6. Provide remote monitoring through Blynk.
7. Control the water pump automatically.
8. Monitor human or animal presence using a PIR sensor.
9. Provide a practical IoT solution for modern agriculture and gardening.

---

## ✨ Features

* 🌱 **Soil Moisture Monitoring**
* 💧 **Automatic Irrigation**
* 🌡️ **Temperature Monitoring**
* 💦 **Humidity Monitoring**
* 🌧️ **Rain Detection**
* 🚰 **Automatic Water Pump Control**
* 📱 **Blynk Mobile Application**
* 📡 **Wi-Fi Connectivity**
* 🚶 **PIR Motion Detection**
* 🔋 **Battery Power Option**
* ☀️ **Solar Power Option**
* 🌐 **Remote Monitoring**
* 💦 **Water Conservation**
* ⚙️ **Reduced Manual Intervention**

---

# 🛠️ Components Used

## Hardware Components

| Component                              | Quantity | Purpose                                 |
| -------------------------------------- | -------: | --------------------------------------- |
| **NodeMCU ESP8266**                    |        1 | Main controller and Wi-Fi communication |
| **Soil Moisture Sensor**               |        1 | Measures soil moisture                  |
| **Humidity Sensor**                    |        1 | Measures relative humidity              |
| **Temperature Sensor**                 |        1 | Measures ambient temperature            |
| **Raindrop Sensor**                    |        1 | Detects rainfall                        |
| **PIR Motion Sensor**                  |        1 | Detects human/animal movement           |
| **24V DC Water Pump**                  |        1 | Irrigates plants                        |
| **Relay / Water Control**              |        1 | Controls the water pump                 |
| **Lithium-ion Battery / Power Module** |        1 | Battery-based power option              |
| **Solar Panel**                        |        1 | Solar power option                      |
| **Connecting Wires**                   |      Set | Electrical connections                  |
| **Breadboard**                         |        1 | Prototype circuit development           |

> **Note:** The uploaded project material does not specify the exact quantity, model number, cost, or GPIO pin assignment for every component. Those values should be added after confirming the actual hardware implementation.

---

## 💻 Software & Technologies

| Technology          | Purpose                                |
| ------------------- | -------------------------------------- |
| **Arduino IDE**     | Firmware development                   |
| **C/C++**           | Embedded programming                   |
| **NodeMCU ESP8266** | IoT controller                         |
| **Wi-Fi**           | Wireless communication                 |
| **Blynk IoT**       | Mobile monitoring and IoT connectivity |

---

# 🏗️ System Architecture

## System Diagram

```text
                         ☁️ INTERNET
                              │
                              │ Wi-Fi
                              ▼
                     ┌─────────────────┐
                     │   BLYNK CLOUD   │
                     └────────┬────────┘
                              │
                              ▼
                       📱 BLYNK APP
                              │
                              │
                              ▼
                    ┌───────────────────┐
                    │  NodeMCU ESP8266  │
                    │    Controller     │
                    └─────────┬─────────┘
                              │
          ┌───────────────────┼───────────────────┐
          │                   │                   │
          ▼                   ▼                   ▼
   🌱 Soil Moisture     🌡️ Temperature      💦 Humidity
      Sensor              Sensor              Sensor
          │                   │                   │
          └───────────────────┼───────────────────┘
                              │
                              ▼
                       🌧️ Rain Sensor
                              │
                              ▼
                       🚶 PIR Sensor
                              │
                              ▼
                    ┌─────────────────┐
                    │ Decision Making │
                    └────────┬────────┘
                             │
                             ▼
                      🔌 Relay / Control
                             │
                             ▼
                       💧 Water Pump
                             │
                             ▼
                           🌱
                         Plants
```

---

## 🔄 Data Flow

1. **Sensors collect data**

   * Soil moisture
   * Temperature
   * Humidity
   * Rainfall
   * Motion

2. **NodeMCU receives sensor data**

3. **ESP8266 processes the sensor information**

4. **Irrigation condition is evaluated**

5. **Pump control decision is made**

6. **Water pump is activated when irrigation is required**

7. **Sensor information is transmitted through Wi-Fi**

8. **Blynk application displays system information**

---

# ⚙️ How It Works

## 🌱 Soil Moisture-Based Irrigation

The soil moisture sensor continuously monitors the moisture content of the soil.

The basic control concept is:

```text
             Soil Moisture
                   │
                   ▼
          ┌─────────────────┐
          │ Read Sensor     │
          └────────┬────────┘
                   │
                   ▼
           Is soil moisture
              too low?
              /       \
            YES        NO
             │          │
             ▼          ▼
        Check Rain    Pump OFF
             │
             ▼
       Is rain detected?
          /        \
        YES         NO
         │           │
         ▼           ▼
     Pump OFF      Pump ON
                     │
                     ▼
                Irrigation
```

### Basic Principle

When the soil moisture level becomes low:

```text
Low Soil Moisture
       ↓
Irrigation Required
       ↓
Pump ON
       ↓
Water supplied to plants
       ↓
Soil moisture increases
       ↓
Pump OFF
```

The exact moisture threshold should be configured according to the actual sensor calibration and plant requirements.

---

# 🌧️ Rain Detection

The raindrop sensor detects the presence of rainfall or moisture on its sensing surface.

The system can use rainfall information to prevent unnecessary irrigation.

```text
             🌧️ Rain Detected
                    │
                    ▼
             Suspend Irrigation
                    │
                    ▼
                Pump OFF
```

This feature helps improve water conservation.

---

# 🌡️ Temperature Monitoring

The temperature sensor measures the ambient temperature around the plants.

Temperature information can be used to:

* Monitor environmental conditions.
* Understand plant-growing conditions.
* Provide additional information through the Blynk application.
* Support future intelligent irrigation algorithms.

---

# 💦 Humidity Monitoring

The humidity sensor measures the relative humidity of the surrounding environment.

Humidity information can be monitored along with soil moisture and temperature to provide a more complete picture of the plant environment.

---

# 🚶 PIR Motion Detection

The PIR sensor can detect movement of humans or animals near the irrigation system.

### Possible Applications

#### 👤 Human Presence

Detect people around the irrigation system during maintenance or manual operation.

#### 🛡️ Security

Movement can be used as an intrusion/security indication.

#### 🐕 Wildlife Detection

The sensor can detect animals that may interfere with plants or irrigation equipment.

---

# 💧 Pump Control

The water pump is responsible for delivering water to the plants.

The NodeMCU controls the pump through a relay/control circuit.

### Pump Control Concept

```text
Soil Moisture Low
       │
       ▼
Rain Detection
       │
       ├──── Rain Detected ────► Pump OFF
       │
       └──── No Rain ──────────► Pump ON
                                      │
                                      ▼
                               Water Irrigation
```

When sufficient soil moisture is achieved, the pump should be switched OFF.

> The uploaded project presentation describes this operating concept but does not specify the final moisture threshold, relay logic level, or exact GPIO used for pump control.

---

# 📱 Blynk IoT Application

The project uses **Blynk** as the IoT/mobile interface.

The NodeMCU ESP8266 connects to Wi-Fi and communicates system information to the Blynk platform.

## Possible Dashboard Information

The Blynk application can be configured to display:

* 🌱 Soil moisture
* 🌡️ Temperature
* 💦 Humidity
* 🌧️ Rain status
* 💧 Pump status
* 🚶 Motion detection
* 📡 Device connectivity

### Example Dashboard

```text
┌─────────────────────────────────┐
│       🌱 SMART IRRIGATION       │
├─────────────────────────────────┤
│                                 │
│ Soil Moisture:      XX %        │
│ Temperature:        XX °C       │
│ Humidity:           XX %        │
│ Rain Status:        NO RAIN     │
│ Pump Status:        ON          │
│ Motion:             NOT DETECTED│
│                                 │
│        💧 PUMP CONTROL          │
│          [ ON / OFF ]           │
│                                 │
└─────────────────────────────────┘
```

The exact Blynk virtual-pin configuration should be added after the final firmware implementation is available.

---

# 🔋 Power System

The project presentation specifies multiple possible power sources.

### Power Options

* 🔋 Lithium-ion battery / power module
* ☀️ Solar panel
* 🔌 Direct power connection

### Solar-Powered Concept

```text
       ☀️ SOLAR PANEL
              │
              ▼
       POWER MANAGEMENT
              │
              ▼
       🔋 BATTERY SYSTEM
              │
        ┌─────┴─────┐
        │           │
        ▼           ▼
     ESP8266      Sensors
        │
        ▼
     Control
        │
        ▼
      Pump
```

The actual voltage regulation and battery-management circuit should be documented according to the final hardware design.

---

# 🚀 Installation & Setup

## Prerequisites

Before starting the project, prepare:

* NodeMCU ESP8266
* Soil moisture sensor
* Temperature sensor
* Humidity sensor
* Raindrop sensor
* PIR sensor
* Relay/control circuit
* 24V DC water pump
* Suitable power supply
* Arduino IDE
* Blynk IoT account
* Wi-Fi network

---

## 🔌 Hardware Setup

### Step 1 — Connect the Sensors

Connect the following sensors to the NodeMCU:

* Soil moisture sensor
* Temperature sensor
* Humidity sensor
* Raindrop sensor
* PIR motion sensor

### Step 2 — Connect Pump Control

Connect the NodeMCU control output to the relay/control circuit used to operate the 24V DC pump.

### Step 3 — Connect Power

Provide appropriate regulated power to the NodeMCU and sensors.

The 24V DC pump should be powered using an appropriate supply capable of handling the pump's current requirements.

### Step 4 — Connect the Irrigation System

Connect the water pump to the irrigation pipe/hose leading to the plants.

### Step 5 — Verify Connections

Before powering the system:

* Check sensor wiring.
* Check power polarity.
* Check relay connections.
* Ensure the pump circuit is isolated appropriately.
* Verify that water cannot reach the electronics.

---

# 💻 Software Setup

## 1. Install Arduino IDE

Install Arduino IDE on your computer.

## 2. Install ESP8266 Board Support

Add ESP8266 board support to Arduino IDE.

## 3. Install Required Libraries

Install the libraries required by your selected sensors and Blynk integration.

Typical project dependencies include:

```cpp
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
```

Additional sensor libraries should be added according to the exact sensor models used.

---

## 4. Configure Wi-Fi

Configure your Wi-Fi credentials in the firmware.

```cpp
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
```

> Never commit real Wi-Fi passwords or Blynk authentication tokens to a public GitHub repository.

---

## 5. Configure Blynk

Configure your Blynk project and authentication credentials.

```cpp
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Smart Irrigation"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"
```

---

## 6. Upload Firmware

1. Connect NodeMCU ESP8266 to your computer.
2. Select the correct ESP8266 board.
3. Select the correct COM port.
4. Compile the firmware.
5. Upload the program.
6. Open Serial Monitor.
7. Verify Wi-Fi and Blynk connectivity.

---

# 📊 System Operation

## Normal Operation

```text
START
  │
  ▼
Connect to Wi-Fi
  │
  ▼
Connect to Blynk
  │
  ▼
Read Sensors
  │
  ├──── Soil Moisture
  ├──── Temperature
  ├──── Humidity
  ├──── Rain
  └──── Motion
  │
  ▼
Evaluate Conditions
  │
  ▼
Control Pump
  │
  ▼
Send Data to Blynk
  │
  ▼
Repeat
```

---

# 🧪 Testing & Evaluation

The following testing approach can be used to validate the prototype.

## 1. Soil Moisture Test

Test the system using different soil conditions:

| Condition  | Expected Result              |
| ---------- | ---------------------------- |
| Dry soil   | Irrigation should activate   |
| Moist soil | Irrigation should remain OFF |
| Wet soil   | Pump should remain OFF       |

---

## 2. Rain Detection Test

| Condition     | Expected Result                         |
| ------------- | --------------------------------------- |
| No rain       | Normal irrigation logic                 |
| Rain detected | Irrigation should be suspended/adjusted |

---

## 3. Temperature Test

Verify that the temperature sensor provides readings that can be displayed through the monitoring system.

---

## 4. Humidity Test

Verify that environmental humidity readings are received by the NodeMCU and transmitted to the Blynk application.

---

## 5. Pump Test

Verify:

* Relay/control operation
* Pump ON operation
* Pump OFF operation
* Water delivery
* Electrical connections
* Power stability

---

## 6. Blynk Connectivity Test

Verify:

* ESP8266 connects to Wi-Fi.
* Blynk connection is established.
* Sensor values appear in the application.
* Pump status is updated.
* Notifications/monitoring functions operate as configured.

---

# 📈 Evaluation Matrix

| Test           | Input                 | Expected Result             |
| -------------- | --------------------- | --------------------------- |
| Soil Moisture  | Dry soil              | Pump activation             |
| Soil Moisture  | Wet soil              | Pump remains OFF            |
| Rain Detection | Water on rain sensor  | Irrigation suspended        |
| Temperature    | Environmental change  | Temperature reading changes |
| Humidity       | Environmental change  | Humidity reading changes    |
| PIR            | Human/animal movement | Motion detected             |
| Wi-Fi          | Available network     | ESP8266 connects            |
| Blynk          | Internet connection   | Data visible remotely       |
| Pump           | Control signal        | Pump operates               |
| Power          | Stable supply         | System operates normally    |

---

# 📱 Usage Guide

## Automatic Mode

The system automatically monitors the soil and controls irrigation according to the programmed conditions.

```text
                    AUTOMATIC MODE
                          │
                          ▼
                   Read Soil Moisture
                          │
                          ▼
                    Check Rainfall
                          │
                  ┌───────┴───────┐
                  │               │
                Rain            No Rain
                  │               │
                  ▼               ▼
              Pump OFF       Check Moisture
                                  │
                          ┌───────┴───────┐
                          │               │
                       Moist            Dry
                          │               │
                          ▼               ▼
                       Pump OFF        Pump ON
```

---

## Remote Monitoring

Users can open the Blynk application to monitor:

* Soil moisture
* Temperature
* Humidity
* Rain detection
* Pump status
* Motion detection

---

# 🌾 Applications

## 🏡 Residential Gardens

Automated watering for home gardens and lawns.

## 🪴 Terrace Gardening

Useful for terrace gardens where manual watering can be inconvenient.

## 🌾 Agriculture

Can be adapted for agricultural crops and farming applications.

## 🏢 Commercial Landscapes

Can be used in:

* Office complexes
* Parks
* Commercial properties
* Landscaped areas

## 🏟️ Sports Fields

Can assist with efficient irrigation of turf and sports fields.

---

# ✅ Advantages

### 💧 Water Conservation

The system can reduce unnecessary watering by considering soil moisture and rainfall.

### 🤖 Automation

Automatic pump operation reduces the need for continuous manual watering.

### 📱 Remote Monitoring

Blynk allows users to monitor the system remotely.

### ⏱️ Time Saving

The automated system reduces manual effort.

### 🌱 Better Plant Management

Monitoring soil moisture helps provide water according to plant requirements.

### ☀️ Renewable Power Option

Solar power can be incorporated for suitable installations.

---

# ⚠️ Limitations

* Initial implementation cost may be higher than a basic manual irrigation system.
* Users require basic technical knowledge to install and maintain the system.
* Wi-Fi connectivity is required for remote Blynk monitoring.
* Sensor readings depend on proper installation and calibration.
* Outdoor deployment requires suitable waterproofing and protection.
* The uploaded project material does not specify the final sensor calibration values.

---

# 🔮 Future Enhancements

The current prototype can be expanded into a more advanced smart agriculture platform.

### Proposed Improvements

* [ ] 🤖 **AI-Based Irrigation Prediction**
* [ ] 🌦️ **Weather API Integration**
* [ ] 📊 **Historical Sensor Data**
* [ ] 📈 **Irrigation Analytics**
* [ ] 💧 **Water Consumption Measurement**
* [ ] 📡 **LoRa / LoRaWAN Connectivity**
* [ ] 🔋 **Advanced Solar Power Management**
* [ ] 📱 **Improved Mobile Dashboard**
* [ ] 🌱 **Multi-Zone Irrigation**
* [ ] 🚨 **Advanced Alert System**
* [ ] ☁️ **Cloud Data Storage**
* [ ] 🧠 **Machine Learning-Based Irrigation**
* [ ] 🌾 **Crop-Specific Irrigation Profiles**
* [ ] 🔧 **Pump Failure Detection**
* [ ] 📍 **GPS-Based Farm Monitoring**

---

# 🛡️ Maintenance & Safety

## 🧽 Sensor Maintenance

Regularly inspect:

* Soil moisture sensor
* Raindrop sensor
* Temperature sensor
* Humidity sensor
* PIR sensor

Clean sensors when required and ensure proper placement.

---

## ⚡ Electrical Safety

* ⚠️ Disconnect power before modifying wiring.
* ⚠️ Keep electronic components away from water.
* ⚠️ Use an appropriate relay/control circuit for the pump.
* ⚠️ Use a suitable power supply for the 24V pump.
* ⚠️ Protect the ESP8266 and electronics using a suitable enclosure.
* ⚠️ Ensure correct polarity and grounding.
* ⚠️ Do not expose the prototype breadboard directly to rain.

---

## 💧 Water Safety

The irrigation system should be installed so that water cannot directly contact:

* ESP8266
* Relay/control electronics
* Battery
* Power supply
* Wiring connections

For permanent outdoor deployment, use an appropriately rated waterproof enclosure.

---

# 📅 Recommended Maintenance Schedule

| Task                | Frequency          | Details                          |
| ------------------- | ------------------ | -------------------------------- |
| Visual Inspection   | Daily              | Check pump and system condition  |
| Sensor Inspection   | Weekly             | Check sensor placement           |
| Sensor Cleaning     | Weekly/As Required | Remove dirt and deposits         |
| Wiring Inspection   | Monthly            | Check loose/corroded connections |
| Pump Inspection     | Monthly            | Verify pump operation            |
| System Testing      | Monthly            | Test automatic irrigation        |
| Calibration         | As Required        | Verify sensor readings           |
| Battery/Solar Check | Monthly            | Check power system               |

---

# 📊 Performance Metrics

The exact numerical performance specifications were **not provided in the project presentation**, so they should be measured during final testing rather than estimated.

Recommended metrics to document:

| Metric                     | Value          |
| -------------------------- | -------------- |
| Soil Moisture Accuracy     | To be measured |
| Temperature Accuracy       | To be measured |
| Humidity Accuracy          | To be measured |
| Rain Detection Response    | To be measured |
| Pump Response Time         | To be measured |
| Wi-Fi Range                | To be measured |
| Blynk Update Interval      | To be measured |
| Pump Power Consumption     | To be measured |
| Battery Runtime            | To be measured |
| Solar Charging Performance | To be measured |

---

# 🌟 Project Impact

## Environmental Impact

💧 **Water Conservation**

Automatic irrigation can help reduce unnecessary water usage.

🌱 **Improved Plant Care**

Soil moisture monitoring allows irrigation decisions to be based on actual soil conditions.

☀️ **Renewable Energy Potential**

Solar power can be incorporated to reduce dependence on conventional power sources.

---

## Technical Impact

🔧 **IoT Integration**

Combines sensors, embedded control, Wi-Fi, cloud connectivity, and mobile monitoring.

📱 **Remote Monitoring**

Users can monitor the irrigation system remotely using Blynk.

🤖 **Automation**

The system reduces dependence on manual pump operation.

🌐 **Scalable Architecture**

The basic architecture can be expanded with additional sensors and irrigation zones.

---

# 📸 Project Gallery

Add your actual project photographs to the `images/` directory.

## Hardware Model

![Smart Irrigation Hardware](images/hardware-model.jpg)

*Smart irrigation system hardware prototype.*

---

## Working Model

![Working Smart Irrigation System](images/working-model.jpg)

*Smart irrigation system operating with DC power supply.*

---

## Circuit Diagram

![Circuit Diagram](images/circuit-diagram.png)

*Circuit diagram of the smart irrigation system.*

---

## Block Diagram

![System Block Diagram](images/block-diagram.png)

*System architecture showing sensors, NodeMCU, Blynk and irrigation control.*

---

## Blynk Dashboard

![Blynk Dashboard](images/blynk-dashboard.png)

*Blynk mobile application for remote monitoring.*

> Replace the image filenames above with the actual filenames in your repository.

---

# 🗂️ Suggested Repository Structure

```text
Smart-Irrigation-System/
│
├── README.md
│
├── src/
│   └── smart_irrigation.ino
│
├── images/
│   ├── hardware-model.jpg
│   ├── working-model.jpg
│   ├── circuit-diagram.png
│   ├── block-diagram.png
│   └── blynk-dashboard.png
│
├── docs/
│   └── project-report.pdf
│
└── LICENSE
```

---

# 🛠️ Troubleshooting

| Problem                                | Possible Cause               | Solution                        |
| -------------------------------------- | ---------------------------- | ------------------------------- |
| **ESP8266 does not connect to Wi-Fi**  | Incorrect credentials        | Verify SSID and password        |
| **Blynk not connecting**               | Invalid token/network        | Verify Blynk configuration      |
| **Soil sensor gives incorrect values** | Sensor placement/calibration | Check sensor and calibrate      |
| **Pump does not start**                | Relay/power problem          | Check relay and pump supply     |
| **Pump does not stop**                 | Incorrect control logic      | Check moisture threshold        |
| **Rain sensor not detecting rain**     | Sensor contamination/wiring  | Clean and inspect sensor        |
| **Temperature not displayed**          | Sensor/library issue         | Verify wiring and library       |
| **Humidity not displayed**             | Sensor/library issue         | Verify wiring and configuration |
| **PIR not detecting motion**           | Placement/sensitivity        | Adjust sensor position          |
| **ESP8266 resets**                     | Power instability            | Check regulated power supply    |
| **Blynk values not updating**          | Wi-Fi/internet issue         | Check network connectivity      |
| **Pump operates unexpectedly**         | Incorrect threshold          | Recalibrate moisture threshold  |

---

# 🔍 Diagnostic Procedure

When troubleshooting the system, follow this sequence:

```text
1. Check Power
       ↓
2. Check ESP8266
       ↓
3. Check Wi-Fi
       ↓
4. Check Blynk
       ↓
5. Check Individual Sensors
       ↓
6. Check Sensor Values
       ↓
7. Check Control Logic
       ↓
8. Check Relay
       ↓
9. Check Pump
       ↓
10. Test Complete System
```

---

# 👥 Team Members

### University College of Engineering, Ariyalur

**Department of Electrical and Electronics Engineering**

| Name                  | Register Number  |
| --------------------- | ---------------- |
| **Arunkumar G.**      | **814820105001** |
| **Manimaran M.**      | **814820105004** |
| **Dinesh V.**         | **814820105301** |
| **Fharith Ahamed F.** | **814820105302** |

### 👨‍🏫 Supervisor

**Mr. K. Kanagavel**
Teaching Fellow
Department of Electrical and Electronics Engineering

### 👩‍🏫 Coordinator

**Mrs. V. Malathy, M.E.**
Assistant Professor
Department of Electrical and Electronics Engineering

---

# 🤝 Team Contribution

The project combines several areas of embedded and IoT engineering:

### 🔧 Hardware Development

* Sensor integration
* ESP8266 interfacing
* Pump control
* Power system
* Circuit implementation

### 💻 Embedded Software

* Sensor data acquisition
* Decision-making logic
* Pump control
* Wi-Fi communication

### 📱 IoT Integration

* Blynk connectivity
* Mobile monitoring
* Remote system information

### 🧪 Testing

* Sensor testing
* Pump testing
* Irrigation testing
* Communication testing

---

# 🧪 Project Evaluation

The project was evaluated based on its ability to:

* Monitor soil moisture.
* Detect environmental conditions.
* Detect rainfall.
* Control irrigation automatically.
* Connect to the Blynk platform.
* Provide mobile monitoring.
* Operate the water pump.
* Reduce manual intervention.

---

# 🏆 Project Achievements

* ✅ Developed an IoT-based irrigation prototype.
* ✅ Integrated NodeMCU ESP8266 with multiple sensors.
* ✅ Implemented soil moisture-based irrigation.
* ✅ Integrated rain detection.
* ✅ Implemented environmental monitoring.
* ✅ Integrated PIR motion detection.
* ✅ Implemented water pump control.
* ✅ Integrated Blynk IoT monitoring.
* ✅ Demonstrated an automated irrigation concept.
* ✅ Provided a foundation for future smart agriculture applications.

---

# 🎓 Educational Value

This project provides practical experience in:

### Embedded Systems

* Microcontroller programming
* GPIO interfacing
* Sensor integration
* Actuator control

### IoT

* Wi-Fi communication
* Cloud connectivity
* Mobile monitoring
* Remote device management

### Electronics

* Sensor circuits
* Relay control
* Power management
* DC motor/pump control

### Software Development

* C/C++ programming
* Sensor data processing
* Automation logic
* IoT application integration

---

# 📄 References

The project presentation identifies the following technologies and components:

1. **NodeMCU ESP8266**
2. **Blynk IoT Platform**
3. **Soil Moisture Sensor**
4. **Temperature Sensor**
5. **Humidity Sensor**
6. **Raindrop Sensor**
7. **PIR Motion Sensor**
8. **24V DC Water Pump**

Additional component datasheets and library documentation should be added to this section when the exact sensor models are finalized.

---

# 📜 License

This project was developed as an academic project under the:

**University College of Engineering, Ariyalur**
**Department of Electrical and Electronics Engineering**

The project may be used for educational and experimental purposes.

Please provide appropriate credit when reusing or modifying the project.

---

# 🙏 Acknowledgments

We would like to thank:

* **University College of Engineering, Ariyalur**
* **Department of Electrical and Electronics Engineering**
* **Mr. K. Kanagavel** – Supervisor
* **Mrs. V. Malathy, M.E.** – Coordinator
* **Blynk IoT Platform**
* **NodeMCU ESP8266 Community**
* **Arduino Community**
* Open-source developers and documentation contributors

for their support and resources during the development of this project.

---

# 🌱 Conclusion

The **Smart Irrigation System Using Blynk** demonstrates how IoT technology can be applied to modern agriculture and gardening.

The system combines **soil moisture monitoring, environmental sensing, rainfall detection, automated pump control, and mobile monitoring** into a single prototype.

By automatically responding to soil conditions, the system can help reduce unnecessary water usage while reducing manual effort.

The project provides a foundation for future improvements such as **AI-based irrigation prediction, weather integration, water consumption monitoring, LoRa/LoRaWAN connectivity, multi-zone irrigation, and advanced agricultural analytics**.

---

**⭐ If you found this project useful, please give it a star!**

**🤝 Contributions, suggestions, and improvements are welcome!**

**🌱 Built with NodeMCU ESP8266 + Blynk + IoT**

---

*Smart Irrigation for a Sustainable Future* 🌱💧
*Developed as an academic IoT project at University College of Engineering, Ariyalur*
