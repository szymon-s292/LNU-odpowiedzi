//
// Rozwiąż krzyżówkę
// Tym razem masz dostępne aż 5 linijek
//
// za pomocą funkcji LCDWriteChar() oraz LCD_LINE{N} gdzie N oznacza numer lini
// niezapomnij o inicjalizacji ekranu.
//

#include "lcd_api.h"

void Strzalka()
{
    LCDInit();
    LCDDelay(LCD_DELAY);
    LCDWriteChar(LCD_LINE1, 8, 'R');
    LCDWriteChar(LCD_LINE2, 8, 'O');
    LCDWriteChar(LCD_LINE3, 8, 'B');
    LCDWriteChar(LCD_LINE4, 8, 'O');
    LCDWriteChar(LCD_LINE5, 8, 'T');
}
