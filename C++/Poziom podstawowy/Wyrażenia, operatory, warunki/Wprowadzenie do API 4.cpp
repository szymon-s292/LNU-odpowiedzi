#include "led_api.h"

void send_SOS(void)
{
    power_on();
    power_delay(DELAY_DOT);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DOT);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DOT);
    power_off();
    power_delay(DELAY_SPACE);
    //----------------------------------------
    power_on();
    power_delay(DELAY_DASH);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DASH);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DASH);
    power_off();
    power_delay(DELAY_SPACE);
    //---------------------------------------------
    power_on();
    power_delay(DELAY_DOT);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DOT);
    power_off();
    power_delay(DELAY_NEXT);
    
    power_on();
    power_delay(DELAY_DOT);
    power_off();

}
