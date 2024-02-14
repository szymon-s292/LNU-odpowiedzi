// Zadanie
// Uzupełnij funkcję checkCondition() tak aby w przypadku przekroczenia którejkolwiek wartości zgłosiła prawidłowy alarm: WARNING, DANGER, CRITICAL.
// W przypadku gdyby wszystko było wporządku niech funkcja zgłosi wartość NORMAL.
#include "medical_api.h"

E_MEDICALS checkCondition()
{
    int sys    = get_systolic_pressure();
    int dia    = get_diastolic_pressure();
    int pulse  = get_pulse();
    float temp = get_temperature();
    int i = 0;
    if(sys < 100 || sys > 139 || dia < 70 || dia > 89) i++;
    if(pulse < 55 || pulse > 80) i++;
    if(temp < 36.0 || temp > 37.0) i++;
    
    if(i == 1) return WARNING;
    else if(i == 2) return DANGER;
    else if(i == 3) return CRITICAL;
    else return NORMAL;
}
