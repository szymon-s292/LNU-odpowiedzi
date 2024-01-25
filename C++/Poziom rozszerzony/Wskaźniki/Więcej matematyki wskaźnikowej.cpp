/* Funkcji do napisania jest 'więcej niz zwykkle'.
 * Na szczęście nie musisz napisać wszystkich od razu,
 * a nawet sama zawartość funkcji może być pisana krok po kroku.
 *
 * Spróbuj pobawić się w "TDD" - Pisanie kodu w małych krokach tak, by za każdym
 * razem przechodził więcej testów.
 * Do TDD jeszcze 'kiedyś' wrócimy
 */

int* next(int* ptr, unsigned int n = 1)
{
    return (ptr) ? ptr + n : nullptr;
}


int* prev(int* ptr, unsigned int n = 1)
{
    return (ptr) ? ptr - n : nullptr;
}


int* middle(int* l, int* r)
{
    return (l < r) ? l + ((r - l) / 2) : nullptr;
}
