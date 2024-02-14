#include <led_api.h>

void set_light( int time )
{
    power_on();
    power_delay( time );
    power_off();
}
