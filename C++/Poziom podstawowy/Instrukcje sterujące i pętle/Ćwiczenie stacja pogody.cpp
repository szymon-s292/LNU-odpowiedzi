#include "stacja_pogody.h"

float calc_mean()
{
    float avg = 0;
    
    for(int hour = 0; hour < 24; hour++)
    {
        for(int day = 1; day <= 31; day++)
        {
            avg += get_temp(hour, day, 3, 2012);   
        }
    }
    return avg / (24 * 31);
}