#include "main.h"
//Class Employees ->Encapsulation-> Officer
//Declaration Employees
class Employees: public Officer
{
    private:
        string m_level;
        Officer m_information_Employees;
    public:
        void add_level(string level);
        string get_level();
};
//Definition Employees
void Employees::add_level(string level)
{
    m_level=level;
}
string Employees::get_level()
{
    return m_level;
}
