// Ktoś już coś tu napisał, pewnie potrzebował do jakiś swoich rzeczy...
// Może tobie też się przyda?

#include <OSqlRequest.hpp>
#include <Part.hpp>
#include <iostream>

namespace sql
{
// For a given id, returns a SQL query that selects product with that id
    std::string getSelectSyntax(const std::uint64_t& id)
    {
        return "SELECT * FROM products WHERE Id = " + std::to_string(id);
    }

    sql::Part getPart(const uint64_t id)
    {
        OSql::SqlQueryResult res = OSql::execQuery(getSelectSyntax(id));
        sql::Part p{};

        p.id = std::stoul(res.data[0][0]);
        p.name = res.data[0][1];
        p.manufacturer = res.data[0][2];
        p.documentation = res.data[0][3];
        p.location = res.data[0][4];
        p.stock = std::stoull(res.data[0][5]);

        return p;
    }
}
