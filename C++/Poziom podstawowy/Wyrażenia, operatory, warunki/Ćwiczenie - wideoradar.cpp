// Zadanie
// Operator systemu zlecił Ci napisanie funkcji bool make_photo(),
// która przyjmie wartość false jeśli pojazd w polu widzenia wideoradaru ma prawo poruszać się po drodze
// lub wartość true - w przypadku gdy pojazd takiego prawa nie ma.
//
// Zapoznaj się z API systemu i napisz tę funkcję.
#include "ALPR_api.h"

bool make_photo()
{
    if(get_day_of_month() % 2 == 0) 
    {
        if(get_license_number() % 2 == 0) return false;
    }
    else
    {
        if(get_license_number() % 2 != 0) return false;
    }
    return true;
}
