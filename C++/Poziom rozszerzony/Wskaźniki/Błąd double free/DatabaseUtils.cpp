/* Quick note:
 * Poniższe funkcje zwracają "po prostu" string, ale zmienna nie jest kopiowana.
 * Jest to możliwe dzięki NRVO i RVO - Optymalizacjom wartości zwracanej.
 *
 * W dużym skrócie: kompilator 'przeniesie' zwracaną wartość do miejsca
 * wywołania funkcji. Dzięki temu zmienna nie zostanie skopiowana.
 */


#include <DatabaseUtils.hpp>
#include <Proxy.hpp>

#include <algorithm>


std::string getProductName(const int id)
{
	Proxy< sql::Sql > proxy;
	return proxy.getProductName(id);
}

std::string flattenStringArray(std::string* arr, const size_t n)
{
	if(arr == nullptr || n == 0)
	{
		return "";
	}

	std::string result = "";
	for(size_t i = 0; i < n; i++)
	{
		arr[i][0] = toupper(arr[i][0]);
		result += arr[i];

		if(i != n - 1)
		{
			result += ", ";
		}
	}

	delete[] arr;

	// Zamień '_' na spacje
	std::replace(result.begin(), result.end(), '_', ' ');
	return result;
}
