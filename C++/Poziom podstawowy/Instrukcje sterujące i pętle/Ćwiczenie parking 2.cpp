#include "parking.h"

int count_free()
{
    int fre = 0;
    for(int f = 1; f <=3; f++)
    {
        for(int p = 1; p <= 125; p++)
        {
            if(f == 3 && p > 80) 
                break;
            if(!(270 >= get_range(f, p) || 290 <= get_range(f, p))) 
                fre++; 
        }
    }
    return fre;
}
