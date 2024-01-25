#include <Server.hpp>

#include <string>

using namespace std;

// Funkcja wywoływana jest w innych miejscach interfejsu.
// Nie zmieniaj jej działania dla poprawnych danych.
string formatInitials(const char& name, const char& surname)
{
	string res = "";
	res.push_back(toupper(name));
	res.push_back('.');

    if(surname)
    {
    	res.push_back(toupper(surname));
    	res.push_back('.');
    }

	return res;
}

string getReceiversInitials(const int* ids, size_t len)
{
	string result = "";

	for(size_t i = 0; i < len; i++)
	{
		const char* name = getUserName(ids[i]);
		const char* surname = getUserSurname(ids[i]);

		// User does not exist - no initials
		if(!surname)
		{
		    result += formatInitials(name[0], '\0');
		}
		else
		{
		    result += formatInitials(name[0], surname[0]);
		}


		if(i != len - 1)
		{
			result += " ";
		}
	}

	return result;
}
