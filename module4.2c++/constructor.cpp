// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;
class constructor
{
public:
    int a, b;
    constructor(int a)
    {
        cout << "Enter two value for addition: ";
        cin >> a >> b;
        cout << "Addition =" << a + b << endl;
    }
    constructor(int a, int b)
    {
        cout << "Enter two value for subtraction: ";
        cin >> a >> b;
        cout << "Subtraction =" << a - b << endl;
    }
    constructor(int a, int b, int c)
    {
        cout << "Enter two value for multiplication: ";
        cin >> a >> b;
        cout << "Multiplication =" << a * b << endl;
    }
    constructor(int a, int b, int c, int d)
    {
        cout << "Enter two value for division: ";
        cin >> a >> b;
        cout << "Divition =" << a / b << endl;
    }
};

int main()
{

    constructor d1(0), d2(0, 0), d3(0, 0, 0), d4(0, 0, 0, 0);

    return 0;
}