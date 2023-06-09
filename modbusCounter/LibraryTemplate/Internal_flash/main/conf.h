//use this file for project configuration and defination
#ifndef CONF_H_
#define CONF_H_

/*-----------BLOCK CONTROL-----------*/

#define DEBUGOUT          //use for debug msg on USB serial port
//#define Serial Serialx  //use Serialx to replicate debug to any serial port like Serial1,Serial2
#define USE_MODBUS          //use modbus protocol
#define ModSerial Serial1   //serial port selection for rs-485 module

#define WATCHDOG_ENABLE     //Enable watchdog for software reset
#define I2C_ENABLE          //Enable I2C protocol
#define USE_I2C2            //I2C Peripherals selection uncomment will automatically shift to I2C_1
#define INTERNAL_EPROM_ENABLE     //Enable internal flash for default configuration 
#define RTC_ENABLE          //Enable RTC module depedent on I2C communication 


//------------MODULE-Selection----------
#define MODBUS_COUNTER


/*--------------GLOBAL_VAR--------------*/


//-----------BLINK_STATUS-----------
#define Network_LED PB1     //Network and MQtt
#define MQTT_PUSH_LED PB0   //packet send to cloud  


 
#ifdef INTERNAL_EPROM_ENABLE
struct  Default_variable {
  uint16_t device_id = 1;         //modbus device ID 0-255
  uint16_t mod_config = SERIAL_8N1;//default is SERIAL_8N1 from core
  uint16_t mod_baud    = 9600;     //default baudrate is 9600
  uint16_t net_timeout = 60;       //60 second network timeout for event update 
  uint16_t debounce_tm = 100;       //routine time for timer is debouncing time in milliseconds 
  uint32_t count_1 = 0;      //use for shift A counter_1
  uint32_t count_2 = 0;      //use for shift A counter_2 
} default_var, running_var;

 

#endif//INTERNAL_EPROM_ENABLE


//---------------SERIAL-COMMUNICATION-----------
//  SERIAL_8N1  0B00000000 || 0 //modbus Serial config mode of operation
//  SERIAL_8N2  0B00100000 || 32
//  SERIAL_9N1  0B00001000 || 8
//  SERIAL_9N2  0B00101000 || 40  
//
//  SERIAL_8E1  0B00001010 || 10
//  SERIAL_8E2  0B00101010 || 42
//  SERIAL_8O1  0B00001011 || 11
//  SERIAL_8O2  0B00101011 || 43



#ifdef DEBUGOUT    //Use USB_Serial for debug communication
#define DEBUG_BAUD 9600
#define DEBUG_PRINT_F(...)    Serial.print(F(__VA_ARGS__))
#define DEBUG_PRINTLN_F(...)  Serial.println(F(__VA_ARGS__))
#define DEBUG_PRINT(...)    Serial.print(__VA_ARGS__)
#define DEBUG_PRINTLN(...)  Serial.println(__VA_ARGS__)
#else
#define DEBUG_PRINT_F(...) //else remove the debug  feature
#define DEBUG_PRINTLN_F(...)
#define DEBUG_PRINT(...)
#define DEBUG_PRINTLN(...)
#endif //DEBUGOUT  
 

//------------------MODULE_MODBUS_COUNTER-----------
#ifdef USE_MODBUS   
  //----------Manual relay  block--------
//  #define O1 PB12 //RELAY1 
  
  //-----------INPUT Button---------
  #define INPUT_1 PA0 
  #define INPUT_2 PA1 
  #define Run_LED PC13
  
  //----------Input Button Variable------  
#endif//USE_MODBUS

 
#endif // CONF_H_  
