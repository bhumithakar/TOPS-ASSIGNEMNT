/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/

#include<iostream>
using namespace std;
class calculator
{
    public:
    void getdata(int a)
    {
        int b;
        cout << "Enter two value for addition: ";
        cin >> a >> b;
        cout << "Addition =" << a + b << endl;
    }
    void getdata(int a, int b)
    {
        cout << "Enter two value for subtraction: ";   
        cin >> a >> b;
        cout << "Subtraction =" << a - b << endl;
    }
    void getdata(int a, int b, int c)
    {
        cout << "Mnter two value for multiplication: ";
        cin >> a >> b;
        cout << "Multiplication =" << a * b << endl;
    }
    void getdata(int a, int b, int c, int d)
    {
        cout << "Enter two value for division: ";
        cin >> a >> b;
        cout << "Divition =" << a / b << endl;
    }
};
int main()
{
    calculator d1;
    d1.getdata(30);
    d1.getdata(40,50);
    d1.getdata(32,40,54);
    d1.getdata(45,67,56,45);
    return 0;
}