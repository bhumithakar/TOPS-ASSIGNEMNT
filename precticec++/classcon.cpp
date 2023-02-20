#include<iostream>
using namespace std;
class calculation
{
    public:
    int a,b,add,sub,multi,divi;
    calculation()
    {
        cout << "enter two numbers";
        cin >> a >> b; 
        add = a + b;
        sub  = a - b;
        multi = a * b;
        divi = a / b;
    }

    void showdata()
    {
        cout << "add=" << add << endl;
        cout << "sub=" << sub << endl;
        cout << "multi=" << multi << endl;
        cout << "divi=" << divi << endl;
    }
};

int main()
{
    calculation ob1,ob2,ob3;

    return 0;
}

/*
function declare
function define

returntype functionname (paremeters)
{
    body
}

function calling

    functionname (paremeters)


constructor is alsoa function but special

constructor doesn't have return value
constructor we cannot give name its name is same as clasname

constructor will be called automatically we don't have to call constructor
when object is define
*/