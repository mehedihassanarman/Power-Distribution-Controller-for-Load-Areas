# Power Distribution Controller for Load Areas

![Load Area 1 (600 MW) Status in Generation Variations.jpg](https://github.com/mehedihassanarman/Power-Distribution-Controller-for-Load-Areas/blob/main/Project%20Image/Load%20Area%201%20(600%20MW)%20Status%20in%20Generation%20Variations.jpg)

# ⚙️ Load Area Controller  
### 🧠 Microcontroller-Based Smart Power Distribution System

---

## 📘 Project Overview

This project introduces a **microcontroller-based Load Area Controller** designed to manage and distribute electricity within individual load areas based on real-time generation data. It complements a broader load management system aimed at preventing national blackouts, such as the one experienced in Bangladesh in 2014.

---

## 🎯 Key Objectives

- Dynamically control power distribution across load nodes in each area
- Respond in real time to changes in available generation
- Display live status of connected and disconnected loads
- Maintain grid balance during partial or full generation failure

---

## 🛠️ System Components

- **Microcontroller**: Dual AT89C52 microcontroller setup for control logic and display
- **Power Monitoring**: Phasor Measurement Units (PMUs) to measure available power
- **Switching**: Relay-based electronic switches to control power flow to load nodes
- **Communication**: Simulated SCADA, wireless mesh, PLC, and fiber-optic methods
- **Display**: LCD panels to show real-time load status

---

## ⚙️ How It Works

- Load Area 1 (600 MW) is divided into 8 nodes (75 MW each)
- Microcontroller 1 receives power allocation data from the operating software
- Based on available generation, it selectively activates load nodes
- Microcontroller 2 displays real-time node status via LCD panels
- For example, with only 282 MW available, the controller powers 3 nodes and disconnects the remaining 5

---

## 🔍 Features

- Real-time power management at the node level
- Scalable for integration with national load management systems
- Responsive to varying load demand and power generation
- Simulated environment supports multiple communication protocols
- User-friendly LCD interface for monitoring system performance

---

## 💡 Use Cases

- Smart grid simulation and training
- Embedded systems in load balancing applications
- Research in distributed energy management
- Blackout prevention systems for low-resource regions

---

> 🔌 This project demonstrates how embedded systems and communication technologies can work together to create intelligent, node-level power distribution in critical grid environments.
