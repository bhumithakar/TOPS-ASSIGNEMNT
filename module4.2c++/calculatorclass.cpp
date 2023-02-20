// WAP to create simple calculator using class

#include <iostream>
using namespace std;
class calculation
{
public:
    int a, f;
    void getdata()
    {
        cout << "Enter two values: ";
        cin >> a >> f;
    }
    void putdata()
    {
        cout << "Addition: " << a + f << endl;
        cout << "Subtraction: " << a - f << endl;
        cout << "Multiplication: " << a * f << endl;
        cout << "Division: " << a / f << endl;
    }
};

int main()
{
    calculation ob1, ob2;
    ob1.getdata();
    ob1.putdata();

    ob2.getdata();
    ob2.putdata();

    return 0;
}