#include "rajdy.h"

float average_speed( int check_points )
{
    float road = 0;
    for(int i = 1; i <= check_points; i++)
    {
        road += get_length(i);
    }
    
    float tim = 0;
    for(int i = 1; i <= check_points; i++)
    {
        tim += get_time(i);
    }
    
    road = (road / 1000) * 3600;
    return road/tim;
}