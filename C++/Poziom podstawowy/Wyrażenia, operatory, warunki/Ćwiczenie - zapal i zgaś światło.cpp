// Zadanie:
// Wyłącznik ma zadziałać (funkcja turn_off zwraca wartość true) jeśli spełniony jest przynajmniej jeden z warunków:
//   czujnik nie wykrywa ruchu na korytarzu (move = false) oraz jest jasno na zewnątrz budynku (day_light = true).

bool turn_off( bool move, bool day_light )
{
    if(!move || day_light) return true;
    return false;
}
