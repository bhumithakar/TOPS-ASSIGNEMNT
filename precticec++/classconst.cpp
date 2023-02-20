#include <iostream>
using namespace std;
template<class t1>
class calculator
{
    public:
    t1 a,b;
    calculator()//default constucto
    {
        cout<<"enter two valu";
        cin >> a>> b;
    }
    void addition()
    {
        t1 add;
        add=a+b;
        cout <<"addition :"<<add;
    }
    void subtraction()
    {
        t1 sub;
        sub=a-b;
        cout <<"subtraction :"<<sub;
    }
};

int main()
{
    calculator<int>c1;
    calculator<float>c2;
    c1.addition();
    c1.subtraction();
    c2.addition();
    c2.subtraction();
    return 0;
}