#include <string>

using namespace std;

string& addDateToString(string& str, unsigned int h, unsigned int m)
{
    if(h < 10)
        str.append("0");

    str.append(std::to_string(h));
    str.append(":");

    if(m < 10)
        str.append("0");
    str.append(std::to_string(m));
    return str;
}
