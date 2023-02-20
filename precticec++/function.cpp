#include<iostream>
using namespace std;
void calculation()
{
    int a,b,add;
    cout << "enter two value ";
    cin >> a,b;
    add=a+b;
    cout << "addition is" <<add;
}

int main()
{
    calculation();
    return 0;
}

/*
class should be defined outside of main function 
{
    public: // access specifier public private(default) protected
    variables // data members
    functions // member function of methods
    // methods is nothing but just a function in inside class
};
never forget semicolon after class completion and never add semicolon after function completion

object is made inside main()

classname objectname;
*/