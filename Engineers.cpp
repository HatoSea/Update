#include "main.h"
//Class Engineers ->Encapsulation-> Officer
//Declaration Engineers
class Engineers: public Officer
{
    private:
        string m_level;
        Officer m_information_Engineer;
    public:
        void add_level(string level);
        string get_level();
        
};
//Definition Engineers
void Engineers::add_level(string level)
{
    m_level=level;
}
string Engineers::get_level()
{
    return m_level;
}