/*
 SONOFF BASIC: firmware
 More info: https://github.com/tschaban/SONOFF-BASIC-firmware
 LICENCE: http://opensource.org/licenses/MIT
 2016-10-27 tschaban https://github.com/tschaban
*/

#ifndef _sonoff_ds18b20_h
#define _sonoff_ds18b20_h

#define SENSOR_DS18B20 14

class SonoffDS18B20 {
  private:  
    float previousTemperature = 0;   
      
  public:
    SonoffDS18B20();
    float get(); 
};
#endif

