#include "main.h"
//Class Worker ->Encapsulation-> Officer
//Declaration Workers
class Workers: public Officer
{
    private:
        string m_level;
        Officer m_information_Worker;
    public:
        void add_level(string level);
        string get_level();     
};
//Definition Workers
void Workers::add_level(string level)
{
    m_level=level;
}
string Workers::get_level()
{
    return m_level;
}

