/* Notka
 * Pliki z rozszerzeniem .hpp to pliki nagłówkowe c++
 * h -> header (z ang. nagłówek)
 * pp -> plusplus ++
 */
#include <Database.hpp>
#include <TextFormattingTools.hpp>

using namespace std;

// Nie przyjmujemy wskaźnika, bo nie chcemy modyfikować oryginału
bool canUseLogin(string login)
{
    removeWhitespaces(&login);
    toLowerCase(&login);

    return (!isLoginUsed(&login)) ? false : true;
}
