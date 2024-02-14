#include <metro_api.h>
int time_to_arrival( void )
{
    int a = get_distance();
    int b = get_speed();
    return a/b;
}
