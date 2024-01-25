// Na razie nie zwracaj uwagi na tą linijkę :)
#pragma once

struct State;

struct State
{
    std::string url;
    struct State* next = nullptr;
    struct State* prev = nullptr;
};
