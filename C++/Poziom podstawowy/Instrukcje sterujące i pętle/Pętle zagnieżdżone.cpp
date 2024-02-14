#include "empty_blocks.h"

int calc_empty_blocks( int width, int height, int length )
{
    int empty = 0;
    
    for(int x = 1; x <= width; x++)
    {
        for(int y = 1; y <= height; y++)
        {
            for(int z = 1; z <= length; z++)
            {
                if(!get_content(x,y,z)) empty++;
            }
        }
    }
    return empty;
}
