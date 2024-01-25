// Kod tutaj zawarty jest jednym z rozwiązań poprzedniego zadania

#include <Database.hpp>
#include <TextFormattingTools.hpp>

using namespace std;

bool canUseLogin(string* str)
{
    if(str == nullptr)
    {
        return false;
    }
    else
    {
        removeWhitespaces(str);
        toLowerCase(str);
        return isLoginUsed(str);
    }
}
