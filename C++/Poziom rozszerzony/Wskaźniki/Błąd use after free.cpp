#include <Enemy.hpp>
#include <CoreMinimal.hpp>

void applyDamage(Enemy* enemy, unsigned int damage)
{
	if(enemy == nullptr)
	{
		return;
	}

	if(damage > enemy->health)
	{
		enemy->health = 0;
	}
	else
	{
		enemy->health -= damage;
	}

	if(enemy->health <= 0)
	{
		// Odtworzanie animacji i usuniecie przeciwnika
		getWorld()->getFirstPlayer()->addScore(enemy->getScore());
		enemy->handleDescruction();
		// Dodaj graczowi odpowiednią ilość punktów, zależne od wroga
	}
}
