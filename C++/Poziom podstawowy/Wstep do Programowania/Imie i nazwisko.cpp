//
// Napisz napis : swoje Imie i Nazwisko na 2 liniach wyświetlacza LCD
// za pomocą funkcji LCDWriteString()
// niezapomnij o zmazaniu ekranu za pomoca LCDInit();
//

#include "lcd_api.h"

void ImieNazwisko()
{
    // Należy jeszcze zainicjalizować wyświetlacz, ta funkcja także czyści ekran
    LCDInit();
    LCDWriteString( "Szymon", "Stajszczyk" );

}
