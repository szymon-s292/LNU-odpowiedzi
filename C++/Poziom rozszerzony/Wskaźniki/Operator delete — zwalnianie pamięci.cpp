// To nie jest kod z którego należy 'brać przykład'
// Ten kod ma przedstawić sytuację, w której wystąpi memory leak

#include <Proxy.hpp>

using namespace std;


// ProductId to id produktu, tak jak int to liczba całkowita
unsigned int getInventoryValue(string* categories, unsigned int numberOfCategories)
{
	ProductId* productIds = nullptr;
	unsigned int inventoryValue = 0;

	for(unsigned int i = 0; i < numberOfCategories; i++)
	{
		unsigned int numberOfProducts = 0;
		productIds = getProductIds(&categories[i], &numberOfProducts);

		for(unsigned int j = 0; j < numberOfProducts; j++)
		{
			inventoryValue += getProductPrice(&productIds[j]) *
							  getProductQuantity(&productIds[j]);
		}

		delete[] productIds;
	}

	productIds = nullptr;
	return inventoryValue;
}

/*
 ...
 (To tylko jedna z funkcji w takim interfejsie)
 ...
*/
