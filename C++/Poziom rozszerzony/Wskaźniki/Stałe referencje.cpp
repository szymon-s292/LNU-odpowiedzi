// Za niedługo nie będzie nawet tego...
#include <string>

using namespace std;

/* Notka:
 * Może są jakieś funkcje w c++, które ci w tym pomogą.
 * Zawsze warto sprawdzić...
 */

bool isProdNameValid(const std::string& name)
{
    for(int i = 0; i < name.length(); i++)
        if(name[i] == '.' || name[i] == '/' || name[i] == ',')
            return false;


    return true;
}
