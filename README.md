# ModbusCounter_v1.0

Its a **MODBUS_SLAVE_DEVICE**, which have some output and input functionality and its have 2 counter which count from **0** to **2,147,483,647** 

## Features

some basic features for this module are . 
- It can retain counter value if controller softreset for any reasons.
- It has internal clock with counts the time in second from when it power-on and can not affected by soft-reset.
- In this module watchdog are enable to reset the controller when it stuck in any blocking part of code.
- holding register are configurable and it save the parameter permanently to it's internal flash
- Checksum are incorporate while retrive configured parameter from the device flash and if checksum error found it will configure the device to its defaults parameter
- The device have also a feature for status led which lights up when there is no command reached to module and it will turn off when any modbus command recieve by the module 

## PARAMETER
There are some parameter for setting the module which are discuss below
- **Slave_ID**: It is use to give device an ID which is in range (1-255) . Default is **1**
- **Serial_Configuration**:  Device have some selected Serial configuration Defaults 
is **wordlenght** = 8 **parity** =none  **stop bits** = 1
- **Serial_Baud**:  device have some selection of baudrate which are 2400,4800,9600,19200,38400 Default is **9600**
- **Network_timeout**:  Network timeout use to set the status led for how long it turn off when command recieves (its in milliseconds)
- **Debounce_time**:  Debounce time is use to set the debounce for the input button Default is **200**
- **Count_1**:  Count_1 are use to set the offset to the counter so that the count of input_1 will start increament from the offset which set  Default is **0**
- **Count_2**:  Count_2 are use to set the offset to the counter so that the count of input_2 will start increament from the offset which set  Default is **0**
- **EPOCH**:  Epoch is use for setting the current time in second to the controller so that controller sync to current time and Default is **0** from the power on 

## INPUT BUTTON

2 inputs switch which are connected to the module
- Input_1 is connected to pin PA0
- Input_2 is connected to pin PA1

## OUTPUT RELAY

2 output relays are connected to the module
- Output Relay_1 is connected to pin PB0
- Output Relay_2 is connected to pin PB0

## STATUS LED

Status led is connected to pin PC13

## Communication Protocol

This module has 2 commincation Protocol 
- USB protocol for Serial Debugging
- RS-485 Serial Interface for Modbus commands

## Operating Voltage

The operating voltage for this module is 5 volts
