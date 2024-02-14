// Zadanie:
// Uzupełnij instrukcję if w funkcji landingGearDown o warunek badający relację między aktualną prędkością samolotu asir a dopuszczalną wartością vlo.

int landingGearDown( int asir, int vlo )
{
    if (asir <= vlo) return 1;
    else return 0;
}
