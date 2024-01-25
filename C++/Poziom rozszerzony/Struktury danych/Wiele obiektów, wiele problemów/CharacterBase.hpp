#pragma once

#include <ParticleSystem.hpp>
#include <PlayerController.hpp>
class PlayerController;
// To też nie może być strukturą danych.
// Wymagać będziemy jakiegoś interfejsu od tej klasy.
class CharacterBase
{
    // Będziemy oczekiwać od tej klasy, że w odpowiednim momencie użyje tego systemu.
    ParticleSystem* particleSystem;

    // Możemy chcieć coś przekazać spowrotem do PlayerController.
    // ALe czy to jest dobre rozwiązanie? (nie, ale nie wiemy jeszcze jak zrobić to lepiej)
    PlayerController* playerController;
};
