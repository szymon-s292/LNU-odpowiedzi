 /* Notka:
 * Tak wygląda deklaracja kilku wskaźników w jednej linii:
 * int* a, * b;
 */

int* imPointing;

int multiplyThePointer(int num)
{
    *imPointing *= num;
    return *imPointing;
}
