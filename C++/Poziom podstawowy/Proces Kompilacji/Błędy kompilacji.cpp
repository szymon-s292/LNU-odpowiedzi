// Zadanie:
// Uruchom program.
// Przyjrzyj się komunikatom błędów i ostrzeżeń jakie wyświetlił kompilator w konsoli.
// Wróć do kodu i popraw wiersze, w których wystąpiły problemy, tak aby program prawidłowo się uruchomił.

void kawa(double, double, double);

#include <iostream>
using namespace std;

#define PREDKOSC        2.5
#define LITR            950

void zrobKawe( double temperatura )
{
    double pojemnosc = 0;
    double predkosc = 0;
    double stala = PREDKOSC;

    predkosc = temperatura * PREDKOSC;
    predkosc = predkosc - 100;

    pojemnosc = LITR - 240;
    pojemnosc = pojemnosc * 0.35;

    cout << "Temperatura = " << temperatura << " predkosc młynka = " << predkosc << " pojemność dzbanka = " << pojemnosc << endl;
    kawa( temperatura, predkosc, pojemnosc);
}
