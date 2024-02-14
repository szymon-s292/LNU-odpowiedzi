#include "drone.h"

void landing( void )
{
    while(get_rotations() != 0)
    {
        if(get_altitude() == 0)
        {
            engines_off();
            break;
        }
    }
}
