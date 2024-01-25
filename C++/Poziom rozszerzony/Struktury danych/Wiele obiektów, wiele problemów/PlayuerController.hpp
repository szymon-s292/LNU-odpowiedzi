#pragma once

#include <CharacterBase.hpp>

// Taka klasa nie może być strukturą danych.
// Sama nazwa wskazuje, że wykonywana będzie jakaś funkcja,
// a nie tylko przechowywanie danych.
class PlayerController
{
    // Napewno musimy przechowywać jakieś odniesienie do obiektu gracza.
    CharacterBase* character;

    // Klasy w tym stylu zazwyczaj mają na celu udostępniać opcje sterowania
    // postaciami graczom.
    // Odpowiadają więc m.in. za obsługę klawiatury, myszy, HUD, dzwięków, itp.
};
