/* Zauważ, że jedna litera to jeden 'segment' w sygnale.
 *
 * Było by bardzo wygodnie gdybyś miał jakąś funkcję, np. hexToDec,
 * która zamieniłaby literę hexadecymalną na cyfrę.
 *
 * Wtedy wystarczyło by odpowiednio poprzesuwać wyniki wywołań hexToDec...
*/

unsigned int genSignalFromColor(const char* colors)
{
    if(!colors)
        return 0;

    unsigned int led = 0, temp, bit = 0;
    for(int i = 5; i >= 0; i--)
    {
        switch(colors[i])
        {
            case 'F':
                temp = 15;
                break;
            case 'E':
                temp = 14;
                break;
            case 'D':
                temp = 13;
                break;
            case 'C':
                temp = 12;
                break;
            case 'B':
                temp = 11;
                break;
            case 'A':
                temp = 10;
                break;
            default:
                temp = colors[i] - '0';
        }

        temp <<= bit;
        led |= temp;
        bit += 4;
    }

    return led;
}
