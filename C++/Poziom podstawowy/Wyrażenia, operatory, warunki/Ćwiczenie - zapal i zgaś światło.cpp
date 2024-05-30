// Zadanie:
// Włącznik ma zadziałać (funkcja turn_on zwraca wartość true) jeżeli spełnione są jednocześnie dwa warunki:
//    czujnik wykrył ruch na korytarzu (move = true) oraz jest ciemno na zewnątrz budynku (day_light = false).

bool turn_on( bool move, bool day_light )
{
    if(move && !day_light) return true;
    return false;
}
