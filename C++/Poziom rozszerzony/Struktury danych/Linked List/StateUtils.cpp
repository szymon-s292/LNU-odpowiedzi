/* Funkcje next i prev nie przyjmują stałych wskaźników, bo wtedy
 * zwracany wskaźnik również musiałby być stały, a nie chcemy tego wymuszać
 *
 * Takie wymuszanie stałości 'wszędzie' nazywane jest 'const poisoning'.
 *
 *
 * Jeżeli chcielibyśmy mieć możliwość używania funkcji 'next' dla wskaźników
 * zwykłych i stałych musielibyśmy napisać dwa warianty funkcji o tej samej nazwie.
 */
#include <State.hpp>

State* next(State* state, unsigned int elem)
{
    unsigned int i = 0;
    for(State* n = state; n != nullptr; n = n->next)
    {
        if(i == elem) return n;
        i++;
    }
    return nullptr;
}

State* prev(State* state, unsigned int elem)
{
    unsigned int i = 0;
    for(State* n = state; n != nullptr; n = n->prev)
    {
        if(i == elem) return n;
        i++;
    }
    return nullptr;
}

void del_node(State* state)
{
    if(state != nullptr)
    {
        del_node(state->next);
        delete state;
    }
}

void addNext(State* state, const std::string& newValue)
{
    if(state)
    {
        del_node(state->next);

        State* new_state = new State{};
        new_state->url = newValue;
        new_state->next = nullptr;
        new_state->prev = state;

        state->next = new_state;
    }
}

void insert(State* state, const std::string& newValue)
{
    if(state)
    {

        State* new_state = new State{};
        new_state->url = newValue;

        State* temp = state->next;

        if(temp)
        {
            new_state->next = temp;
            temp->prev = new_state;
        }
        else
        {
            new_state->next = nullptr;
        }

        new_state->prev = state;
        state->next = new_state;

    }
}
