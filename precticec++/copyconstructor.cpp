/*
void addition(int a,int b)
{
    int ans=a+b;
}

main()
{
    addition(85,96)
    m=78;
    n=63;
    addition(m,n)
}

classname object(values);
{
    body
}

classname object(values);

classname object1=object2
classname object1(object2)


*/

#include<iostream>
using namespace std;
class demo
{
    public:
    int x,y;
    //copy constructor
    demo()
    {
    }
    demo(demo &obj1)
    {
        x = obj1.x;
        y = obj1.y;
    }
    void printvalue()
    {
        cout << "x=" << x << "y=" << y << endl;
    }
};
int main()
{
    demo d1;
    d1.x = 90;
    d1.y = 54;
    d1.printvalue();
    demo d2= d1;
    d2.printvalue();
    return 0;
}