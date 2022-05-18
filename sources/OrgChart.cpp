#include "OrgChart.hpp"
using namespace ariel;

OrgChart& OrgChart::add_root(const string& str)
{
    return *this;
}

OrgChart& OrgChart::add_sub(const string& s1, const string& s2)
{
    return *this;
}

 std::ostream& operator<<(std::ostream& os,OrgChart& oc)
{
    return os;
}

