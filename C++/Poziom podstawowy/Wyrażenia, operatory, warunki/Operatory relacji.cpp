// Zadanie:
// Australijski robot 5-generacji uczy się rozpoznawać rodzimą faunę.
// Na podstawie analizy obrazu potrafi rozpoznać ile zwierzę ma nóg, następnie przyporządkować kod odpowiadający zwierzęciu z taką ilością kończych dolnych, które przechowuje w bazie danych.
// Na razie w bazie ma tylko trzy zwierzęta i przyporządkowane im kody:
//   1 - pyton
//   2 - kangur
//   3 - krokodyl
// Uzupełnij funkcję what_animal, która zwraca odpowiedni kod zwięrzęcia w zależności od liczby nóg, którą system operacyjny robota przekazuje do funkcji w parametrze int number_of_legs. 
// Jeżeli liczba nóg nie pasuje do żadnego znanego robotowi zwierzęcia funkcja powinna zwracać 0. 

int what_animal( int number_of_legs )
{
    if(number_of_legs == 0) return 1;
    if(number_of_legs == 2) return 2;
    if(number_of_legs == 4) return 3;
    return 0;
}
