// Zadanie:
// Napisz program sterujący systemem zbiorników retencyjnych dla Centrum Zarządzania Kryzysowego, tak aby zminimalizować ryzyko powodzi w zlewni jednej z rzek. 
// Napisz funkcję calcAvailableCapacity, która jako wartość będzie zwracała objętość wody jaką zbiornik może przyjąć.
#include "reservoir_api.h"

int calcAvailableCapacity( E_RESERVOIRS reservoirs )
{
    int calkowita_objetosc = getCapacity( reservoirs );
    int zajeta_objetosc = getLength( reservoirs ) * getWidth ( reservoirs ) * getLevel( reservoirs ); 
    
    return calkowita_objetosc-zajeta_objetosc;
}
