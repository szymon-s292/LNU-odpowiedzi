#include <led_api.h>

void set_light(int time, COLOR rgb)
{
    power_on();
    set_color( rgb );
    power_delay( time );
    power_off();
}