#include <iostream>
#include <vector>
using namespace std;
//Struct Address

//Class Officer
class Officer
{
private:
//Attribute
    string m_home;
    int m_age;
    string m_name;
    string m_gender;
    string m_attribute;
public:
//Methods
    void add_name(string name);
    string get_name ();
    void add_age( int age);
    int get_age();
    void add_gender(string gender);
    string get_gender();
    void add_home(string home);
    string get_home();
    void add_attribite(string attribute);
    string get_attribute();
    ~Officer();
};

