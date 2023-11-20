#include <iostream>

using namespace std;

void controls ( bool cabin, bool pressure, bool alarm )
{
    cout << "Kabina : ";
    if ( cabin )
        cout << "zamknięta" << endl;
    else
        cout << "otwarta" << endl;

    cout << "Ciśnienie : ";

    if ( pressure )
        cout << "prawidłowe" << endl;
    else
        cout << "nieprawidłowe" << endl;

    cout << "Alarm : ";

    if ( alarm )
        cout << "włączony" << endl;
    else
        cout << "wyłączony" << endl;
}

bool paintStart ()
{
    // tu zadeklaruj zmienne i przypisz im wartości
    bool cabin_closed = true;
    bool pressure_set = true;
    bool alarm_on = false;
    controls ( cabin_closed, pressure_set, alarm_on );
    return cabin_closed && pressure_set && !alarm_on;
}

void dispatch()
{
    if ( paintStart() )
        cout << "Proces rozpoczęty" << endl;
    else
        cout << "Proces wstrzymany" << endl;
}
