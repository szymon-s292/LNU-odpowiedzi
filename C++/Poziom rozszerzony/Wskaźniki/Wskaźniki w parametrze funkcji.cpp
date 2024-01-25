/* Notka:
 * Uważaj na kolejność wykonywania operacji.
 * *str[n] wybierz n-ty element str i zwróć wartość pod jego adresem
 * (*str)[n] wybierz n-ty element wartości pod adresem str
 */

#include <string>

using namespace std;

void reverseStr(string* str, int length)
{
    int i = 0, j = length - 1;
    while(i < j)
    {
        swap((*str)[i], (*str)[j]);
        i++;
        j--;
    }
}
