#include <string>
#include <iostream>
using std::string;
namespace ariel
{
    class OrgChart
    {
        public:
        OrgChart& add_root(const string&);
        OrgChart& add_sub(const string&, const string&);
        friend ostream& operator <<(ostream& os,OrgChart&);
    };
}