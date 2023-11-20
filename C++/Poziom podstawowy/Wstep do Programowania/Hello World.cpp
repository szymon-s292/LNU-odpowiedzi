//
// Napisz napis : "Hello World" na 2 liniach wyświetlacza LCD
// za pomocą funkcji LCDWriteString()
//

#include "lcd_api.h"

void HelloWorld()
{
    LCDWriteString( "Hello", "World" );
}
