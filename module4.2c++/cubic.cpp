// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

class line
{
public:
    inline int multiplication(int a, int b)
    {
        return (a * b);
    }
    inline int cube(int a)
    {
        return (a * a * a);
    }
};

int main()
{
    line obj;
    int n1, n2;

    cout << "Enter 1st value: ";
    cin >> n1;
    cout << "Enter 2nd value: ";
    cin >> n2;
    cout << "Multiplication value is: " << obj.multiplication(n1, n2);
    cout << "\nCube value is " << obj.cube(n1) << " and " << obj.cube(n2);

    return 0;
}