

// Ciekawe, czy otrzymany plik zawsze będzie jsonowy...
// *Może* trzeba to sprawdzić ( czy kończy się na .json )
// Jak nie to pewnie trzena zwrócić pustą strukturę ptree, bo nie ma jsona :(


// Instrukcja 'using' może włączyć w aktualny zakres nie tylko inny namespace,
// ale także poszczególne obiekty, np.:
#include <json_parser.hpp>
#include <ptree.hpp>
#include <string>
#include <iostream>
using turbo::property_tree::ptree;
using turbo::property_tree::json_parser::read_json;
// Pozwoli używać ptree bez tak dłuuuugiej ścieżki, a zarazem będzie dosyć bezpieczne


ptree readJsonData(const std::string& path)
{
    ptree p{};
    if(path.substr(path.find_last_of(".") + 1) == "json")
    {
        read_json(path, p);
    }
    return p;
}
