# Power Distribution Controller for Load Areas
This project was developed as part of a broader solution to prevent large-scale blackouts, inspired by the **Generation Based Load Management System To Prevent Future Blackouts In Bangladesh**. The blackout was triggered by an overload in the cross-border power transmission system, which led to a loss of synchronization and a cascading failure across the national grid. To address such failures at a localized level, we designed a Load Area Controller capable of dynamically managing electricity distribution within load zones based on available generation. This controller works in coordination with a centralized load management system and enhances the system's resilience by responding independently at the distribution level.

![Load Area 1 (600 MW) Status in Generation Variations.jpg](https://github.com/mehedihassanarman/Power-Distribution-Controller-for-Load-Areas/blob/main/Project%20Image/Load%20Area%201%20(600%20MW)%20Status%20in%20Generation%20Variations.jpg)

The Load Area Controller is built using a dual microcontroller system based on the AT89C52. Each load area is divided into multiple nodes—for example, Load Area 1 (600 MW) is divided into 8 nodes of 75 MW each. The system works as follows:

### Communication and Data Reception
The first microcontroller receives power allocation data from the central operating software via a communication channel. Various communication technologies such as SCADA, wireless mesh networks, power-line communication (PLC), and fiber-optic systems are simulated as part of the system design to ensure flexibility for real-world application.

### Dynamic Load Switching
Based on the available power, the first microcontroller activates or deactivates specific nodes. For instance, if only 282 MW is available, the system automatically powers 3 out of the 8 nodes and disconnects the remaining 5 to match the supply with demand precisely.

### User Interface and Monitoring
The second microcontroller is responsible for displaying real-time system status on LCD panels. The interface clearly shows which nodes are currently active and which ones are disconnected, offering operators full visibility into the controller’s actions.

#### Hardware Components
The system uses Phasor Measurement Units (PMUs) for precise, synchronized measurement of electrical signals. It also integrates relay-based electronic switches to control the actual power flow to load nodes. All actions are taken automatically based on data inputs, ensuring fast and accurate responses to generation fluctuations.


## Key Benefits
- Real-time power management at the node level.
- Scalable for integration with national load management systems.
- Responsive to varying load demand and power generation.
- Simulated environment supports multiple communication protocols.
- User-friendly LCD interface for monitoring system performance.

