# ModbusCounter_v1.0

Its a **MODBUS_SLAVE_DEVICE**, which have some output and input functionality and its have 2 counter which count from **0** to **2,147,483,647** 

## Features

some basic features for this module are . 
- It can retain counter value if controller softreset for any reasons.
- It has internal clock with counts the time in second from when it power-on and can not affected by soft-reset.
- In this module watchdog are enable to reset the controller when it stuck in any blocking part of code.
- 

## INPUT BUTTON

2 inputs switch which are connected to the module
- Input_1 is connected to pin PA0
- Input_2 is connected to pin PA1

## OUTPUT RELAY

2 output relays are connected to the module
- Output Relay_1 is connected to pin PB0
- Output Relay_2 is connected to pin PB0
