/*
 * ESP8266 MySensor MQTT Gateway
 *
 * CHANGE LOG:
 *
 *  DATE         REV  DESCRIPTION
 *  -----------  ---  ----------------------------------------------------------
 *  1-Dec-2016 1.0a   TRL - first with RFM95
 *  3-Dec-2016 1.1a  TRL - freq change to 928.5MHz
 *  
 *
 *  Notes:  1)  Tested with Arduino 1.8.1
 *          2)  MySensor 2.1.1 30 Dec 2016
 *    
 *    
 *    TODO:   
 *    
 *    updated to use: iot.winlink.org as gateway
 *    
 */
/* ************************************************************************************** */

  
#include <ESP8266WiFi.h>

// Enable debug prints to serial monitor
#define MY_DEBUG
//#define MY_SPECIAL_DEBUG
//#define MY_DEBUG_VERBOSE_RFM95


#if defined(ARDUINO_ARCH_ESP8266)
#else
#error This program requires an ESP8266 CPU
#endif

//#define MY_DEFAULT_RX_LED_PIN   16
#define MY_DEFAULT_TX_LED_PIN     16
//#define MY_DEFAULT_ERR_LED_PIN  26

// Set baudrate for serial prints on ESP8266, default in MyConfig.h
#define MY_BAUD_RATE 115200

// Enables and select radio type
#define MY_RADIO_RFM95

// Pin's defined below are for ESP8266
#define MY_RFM95_MODEM_CONFIGRUATION RFM95_BW125CR45SF128
//#define MY_RFM95_RST_PIN RFM95_RST_PIN
#define MY_RFM95_IRQ_PIN                15
#define MY_RFM95_SPI_CS                 2
#define MY_RFM95_TX_POWER               23          // max is 23
//#define MY_RFM95_ATC_MODE_DISABLED
#define MY_RFM95_ATC_TARGET_RSSI        (-60)
#define MY_RFM95_FREQUENCY              (928.5f)

#define MY_GATEWAY_MQTT_CLIENT
#define MY_GATEWAY_ESP8266

// Set this node's subscribe and publish topic prefix
#define MY_MQTT_PUBLISH_TOPIC_PREFIX   "MG1-out"
#define MY_MQTT_SUBSCRIBE_TOPIC_PREFIX "MG1-in"

// Set MQTT client id
#define MY_MQTT_CLIENT_ID "MySensor-GW"

// Enable these if your MQTT broker requires usenrame/password
//#define MY_MQTT_USER "username"
//#define MY_MQTT_PASSWORD "password"

// Set WIFI SSID and password
#define MY_ESP8266_SSID "lafleur"
#define MY_ESP8266_PASSWORD "sonysonysony1"

// Set the hostname for the WiFi Client. This is the hostname
// it will pass to the DHCP server if not static.
// #define MY_ESP8266_HOSTNAME "mqtt-sensor-gateway"

// Enable MY_IP_ADDRESS here if you want a static ip address (no DHCP)
#define MY_IP_ADDRESS 192, 94, 167, 42

// If using static ip you need to define Gateway and Subnet address as well
#define MY_IP_GATEWAY_ADDRESS 192, 94, 167, 4
#define MY_IP_SUBNET_ADDRESS 255,255,255,0

// MQTT broker ip address.
//#define MY_CONTROLLER_IP_ADDRESS 192, 94, 167, 32   // DS2
//#define MY_CONTROLLER_IP_ADDRESS 199, 73, 55, 103 // iot.winlink.org
#define MY_CONTROLLER_URL_ADDRESS "iot.winlink.org"

// The MQTT broker port to to open
#define MY_PORT 1883

//#define MY_PARENT_NODE_ID   0

 /*
// Enable inclusion mode
#define MY_INCLUSION_MODE_FEATURE
// Enable Inclusion mode button on gateway
#define MY_INCLUSION_BUTTON_FEATURE
// Set inclusion mode duration (in seconds)
#define MY_INCLUSION_MODE_DURATION 60
// Digital pin used for inclusion mode button
#define MY_INCLUSION_MODE_BUTTON_PIN  3

// Set blinking period
#define MY_DEFAULT_LED_BLINK_PERIOD 300

// Flash leds on rx/tx/err
#define MY_DEFAULT_ERR_LED_PIN 16  // Error led pin
#define MY_DEFAULT_RX_LED_PIN  16  // Receive led pin
#define MY_DEFAULT_TX_LED_PIN  16  // the PCB, on board LED
*/


/* ************************************************************************************** */
// All #define above need to be prior to #include <MySensors.h> below
#include <MySensors.h>
/* ************************************************************************************** */

 // this is part of MySensor core 
void before() 
{ 
  Serial.println ("*** In before***");
  //WiFi.mode(WIFI_AP);    // : set mode to WIFI_AP, WIFI_STA, or WIFI_AP_STA or WIFI_OFF
  //wifi_set_opmode_current(STATIONAP_MODE);
  //wifi_set_opmode_current(STATION_MODE);
 }

void setup() 
{
  Serial.println("*** In Setup***");
  }

void presentation() 
{
  // Present locally attached sensors here
}


void loop() 
{
  // Send locally attach sensors data here
}


