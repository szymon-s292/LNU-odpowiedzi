#include "fruits.h"

int packing( int fruits )
{
    int packed = 0;
    while(fruits > 0)
    {
        add_fruit();
        if(get_weight() >= 2.0) packed++;
        fruits--;  
    }
    return packed;
}
