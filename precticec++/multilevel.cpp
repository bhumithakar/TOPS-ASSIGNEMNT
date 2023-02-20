#include <iostream>
using namespace std;
class A // parent class
{
public:
    int a = 50, b = 60;
    void subtraction()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B // child class
{
public:
    int m = 40, n = 10;
    void subtraction()
    {
        int subtract = m - n;
        cout << "aubtraction= " << subtract << endl;
    }
};
class C : public A, public B
{
public:
    int x = 22, y = 11;
    void multiplication()
    {
        // classname::
        A::subtraction();
        int multiply = x * y;
        cout << "Multiplication= " << multiply << endl;
    }
};
int main()
{
    A a1;
    B b1;
    C c1;
    c1.A::subtraction();
    c1.B::subtraction();
    c1.multiplication();
    return 0;
}