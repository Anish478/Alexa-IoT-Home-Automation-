//#include <dummy.h>

// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "79b6a6b4-a4bc-4cf6-9ed1-d3b30bfcf10c";
const char DEVICE_LOGIN_NAME[]  = "53e17c22-851c-4cac-b580-abe28cf8c894";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onbluelightChange();
void ongreenlightChange();
void onredlightChange();

CloudSwitch bluelight;
CloudSwitch greenlight;
CloudSwitch redlight;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(bluelight, READWRITE, ON_CHANGE, onbluelightChange);
  ArduinoCloud.addProperty(greenlight,READWRITE, ON_CHANGE, ongreenlightChange);
  ArduinoCloud.addProperty(redlight, READWRITE, ON_CHANGE, onredlightChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
