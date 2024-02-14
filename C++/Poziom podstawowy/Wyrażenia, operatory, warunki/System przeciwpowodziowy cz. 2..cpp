// Zadanie:
// Napisz funkcję, która zwraca wyrażoną w m3 objętość wody niesioną przez rzekę w ciągu sekundy w określonym punkcie kontrolnym.
#include "reservoir_api.h"

int calcRiverCapacity( E_RESERVOIRS reservoirs )
{
    int capacity = 0;
    capacity = getRiverLevel(reservoirs);
    capacity *= getRiverSpeed(reservoirs);
    capacity *= getRiverWidth(reservoirs);
    return capacity;
}
