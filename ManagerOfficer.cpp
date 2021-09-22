#include "main.h"
#include <iostream>
#include <vector>
using namespace std;
//Declaration ManagerOfficer
class ManagerOfficer
{
    public:
        void Output (vector <Officer> a);
        void Search (vector <Officer> a);
        void Add_members(vector <Officer> a);  
};
//Difinition ManagerOfficer
void ManagerOfficer::Output(vector <Officer> a)
{
    cout<<"List members in Officer:\n";
    for (int i = 0; i < a.size(); i++)
    {
        a[i].get_name();
        cout<<"\t";
        a[i].get_age();
        cout<<"\t";
        a[i].get_gender();
        cout<<"\t";
        a[i].get_home();
    }    
}

void ManagerOfficer::Search(vector <Officer> a)
{
    string j;
    cout<<"Search Your Name:\n";
    cin>>j;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i].get_name()==j)
        {
            a[i].get_name();
            cout<<"\t";
            a[i].get_age();
            cout<<"\t";
            a[i].get_gender();
            cout<<"\t";
            a[i].get_home();
        break;
        }
    }
}

void ManagerOfficer::Add_members(vector <Officer> a)
{
        cout<<"Add members:\n";
        string k;
        cout<<"Add your name: \n";
        cin>>k;
        a[a.size()].add_name(k);
        int b;
        cout<<"Add your age:\n";
        cin>>b;
        a[a.size()].add_age(b);
        string c;
        cout<<"Add your gender:\n";
        cin>>c;
        a[a.size()].add_gender(c);
        string g;
        cout<<"Add your home_state:\n";
        cin>>g;
        a[a.size()].add_home(g);
}

