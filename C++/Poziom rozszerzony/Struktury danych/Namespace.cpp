// Do your best!

/* Normalnie, o tym z których pinów i kiedy można odczytywać napięcie
 * można przeczytać w dokumentacji, ale mikrokontroler przecież nie
 * istnieje, a my żyjemy w symulacji (patrz C++ level 3) więc...
 *
 * Konwerter sygnału analogowego na cyfrowy jest dostępny przy pinach o ID:
 * 4-7, 11-16 i 18
 * Obiekty typu Pin posiadają informację o swoim id w polu 'id'.
 *
 * Możliwe stany pinu definiuje enum zawarty w strukturze Pin, dostępny
 * poprzez Pin::Mode. Stan pina zawarty jest w polu 'mode'.
 * Napięcie można odczytać tylko z pinów ustawionych jako Input. (Pin::Mode::Input)
 */

#include <Pin.hpp>
#include <Adc.hpp>

namespace PinUtils
{
    int getPinVoltage(const GPIO::Pin& pin)
    {
        if(((pin.id >= 4 && pin.id <= 7) || (pin.id >= 11 && pin.id <= 116) || pin.id == 18) && pin.mode == GPIO::Pin::Mode::Input)
        {
            unsigned int v = GPIO::adcRead(pin);
            v = v * 5 / 1023;
            return v;
        }
        else
        {
            return 0;
        }
    }
}
