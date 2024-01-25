// Tutaj kot
#include <Time.hpp>
#include <algorithm>

bool operator < (const Time& t1, const Time& t2)
{
    if(t1.hour < t2.hour || t1.hour > t2.hour)
    {
        return t1.hour < t2.hour;
    }
    else if(t1.minute < t2.minute || t1.minute > t2.minute)
    {
        return t1.minute < t2.minute;
    }
    return 0;
}
