#include "cake.h"
void setAngle( int requiredWeight )
{
    float w = getWeight();
    rotate(360*requiredWeight/w);;
}
