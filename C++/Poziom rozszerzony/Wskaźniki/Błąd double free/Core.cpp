#include <DatabaseUtils.hpp>

using namespace std;

// size_t == unsigned long long
// Jest to typ używany do przechowywania wielkości tablic - liczb zawsze nieujemnych
string getProductNamesList(int* ids, size_t arrLen)
{
    if (ids == nullptr || arrLen == 0)
        return "";

    std::string* s = new std::string[arrLen];

    for(unsigned int i = 0; i < arrLen; i++)
    {
        s[i] = getProductName(ids[i]);
    }

    return flattenStringArray(s, arrLen);
}
