#include <ObjectPosition.hpp>

/* Funkcja wywołana zostanie raz, gdy punkt doświadczenia powinien zacząć się przesuwać.
 * Tuż po wywołaniu tej funkcji, updatePosition() zostanie wywołane.
 *
 * @param worldTime - czas w sekundach, który upłynął od uruchomienia poziomu
 * @param pointPosition - pozycja punktu doświadczenia
*/
float wt;
ObjectPosition pp, startPos;

void init(const float worldTime, const ObjectPosition& pointPosition)
{
    wt = worldTime;
    pp = pointPosition;
    startPos.x = pointPosition.x;
    startPos.y = pointPosition.y;
}

/* Wywoływana podczas ruchu punktu.
 * Punkt zostanie usunięty, gdy zdeży się z obiektem (funkcja nie będzie później wywoływana)
 *
 * @param worldTime - czas w sekundach, który upłynął od uruchomienia poziomu
 * @param pointPosition - pozycja punktu doświadczenia
 * @param playerPosition - pozycja gracza
 */

void updatePosition(const float worldTime, ObjectPosition& pointPosition, const ObjectPosition& playerPosition)
{
    if(worldTime > wt + 2.0f)
    {
        pointPosition.x = playerPosition.x;
        pointPosition.y = playerPosition.y;
        return;
    }
    else
    {
        float dx = playerPosition.x - startPos.x;
        float dy = playerPosition.y - startPos.y;
        float movePercent = (worldTime - wt) / 2.0f;
        pointPosition.x = startPos.x + dx * movePercent;
        pointPosition.y = startPos.y + dy * movePercent;
    }
}
