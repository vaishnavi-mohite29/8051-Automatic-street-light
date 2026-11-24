
# 💡 8051 Automatic Street Light

An automatic street light system using 8051 Microcontroller and LDR sensor. The light automatically turns ON at night and OFF in the daytime.

## ✨ Features
- Automatic ON/OFF: No manual switching required.
-Energy Efficient: Lights remain OFF during daytime, reducing electricity consumption.
-Low Cost & Simple Circuit: Easy to design, implement, and maintain.
-LDR-Based Control: Automatically operates based on surrounding light intensity.
-Wide Applications: Suitable for roads, streets, parks, colleges, and other public areas.

## 🛠️ Components Used
- 8051 Microcontroller (AT89S52)
- LDR Sensor
- Relay Module (5V)
- LED / Bulb
- Resistors, Connecting Wires
- Power Supply (5V)

## 🔌 Pin Connections

| Component | 8051 Pin | Connection |
| --- | --- | --- |
| LDR Sensor | P1.0 | Sensor Output |
| Relay Module | P2.0 | Light Control |
| LDR VCC | 5V | Power Supply |
| LDR GND | GND | Ground |
| Relay VCC | 5V | Power Supply |
| Relay GND | GND | Ground |
| LED / Bulb | Relay Output | Street Light |

## ⚙️ How It Works
1. LDR senses ambient light
2. Day Time (Ujed) -> LDR Resistance Low -> Light OFF
3. Night Time (Andhar) -> LDR Resistance High -> Light ON
4. 8051 continuously monitors LDR and controls Relay

## 🎯 Scope of Project
-Can be used for street lighting systems in smart cities.
-Applicable in highways, villages, colleges, parks, and other public areas.
-Can be integrated with solar panels to develop a fully automated lighting system.
-Helps reduce electricity consumption and overall electricity costs.

## 🚀 Future Improvements

| Improvement | Benefit |
| --- | --- |
| Solar Panel | Zero electricity bill, charges during day |
| Motion Sensor | Light turns ON only when someone is near |
| IoT + Mobile App | Control light from mobile anywhere |
| Auto Dimming | Light dims late at night to save power |
| Timer System | Auto ON/OFF at fixed time |

## 💻 Code
The source code is available in the `street_light.c` file.

## 👩‍💻 Made By
Vaishnavi Mohite
