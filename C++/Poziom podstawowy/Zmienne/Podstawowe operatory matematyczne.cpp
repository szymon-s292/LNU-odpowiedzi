//
// Zadanie:
// W edytorze utworzono trzy funkcje. Funkcja pomnoz zwraca iloczyn przekazanych do niej wartości będących dwiema liczbami całkowitymi.
// Funkcja dodaj zwraca sumę przekazanych do niej wartości będących dwiema liczbami całkowitymi.
// W funkcji kalkulator utwórz zmienne całkowite o nazwach iloczyn oraz suma, a następnie:
// 1. do zmiennej iloczyn przypisz wartość będącą iloczynem zmiennych liczba1 i liczba2, używając wywołania funkcji pomnoz,
// 2. do zmiennej suma przypisz wartość będącą sumą zmiennych liczba1 i liczba2, używając wywołania funkcji dodaj.

int pomnoz( int A, int B )
{
    return A * B;
}

int dodaj( int A, int B )
{
    return A + B;
}

int kalkulator( int liczba1, int liczba2 )
{
    int iloczyn, suma;
    iloczyn = pomnoz(liczba1, liczba2);
    suma = dodaj(liczba1, liczba2);
    return suma + iloczyn;
}
