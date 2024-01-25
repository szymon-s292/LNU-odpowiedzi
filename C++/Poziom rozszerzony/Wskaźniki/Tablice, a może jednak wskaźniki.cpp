/* Notka:
 * 0 + '0' == '0'  // true
 * 5 + '0' == '5'  // true
 * 3 + '3' == '6' // true
 *
 * Możemy tak zrboić, bo znaki (char) są ustawione 'po kolei'
 * W tabeli ASCII '0' ma numer 48, '1' - 49 i '9' - 57
 */
#include <string>

char* uintToChar(unsigned int liczba)
{
    char* c = new char[12];
    std::string s = "";
    while(liczba != 0)
    {
        s.append(std::to_string(liczba % 10));
        liczba /= 10;
    }

    for(int i = s.length() -1, j = 0; i >= 0;)
    {
        c[i] = s[j];
        i--;
        j++;
    }
    return c;
}
