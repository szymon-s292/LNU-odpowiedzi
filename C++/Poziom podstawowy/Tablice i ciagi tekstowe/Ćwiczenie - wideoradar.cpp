#include "ALPR_api.h"

void check_speed ( int ticket_list[20][2] )
{
    int i = 0;
    int speed = get_current_speed();
    int plate = get_license_number();
    while(i < 20)
    {
        if(speed > 60.0)
        {
            ticket_list[i][0] = plate;
            ticket_list[i][1] = speed;
            i++;
        }

        speed = get_current_speed();
        plate = get_license_number();
    }
}
