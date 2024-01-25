/* Notka:
 * Zauważ, że NULL i nullptr kolorowane są na inne kolory
 */

#include <DisplayController.hpp>

using namespace std;

// Tablice nie są kopiowane - jak to działa już niedługo
void pickTheBest(string initials[], int testScores[], int n)
{
    int m = testScores[0], j;
    for(int i = 0; i < n; i++)
    {
        if(m < testScores[i])
        {
            m = testScores[i];
            j = i;
        }
    }

    int k = 0;
    for(int i = 0; i < n; i++)
        if(testScores[i] == m) k++;

    if(k > 1)
    {
        displayBest(nullptr);
    }
    else
    {
        string *ptr = &initials[j];
        displayBest(ptr);
    }
}
