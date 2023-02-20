#include<iostream>
using namespace std;
class A
{
    public:
    int a=50,b=60;
    void addition()
    {
        int answer=a+b;
        cout<<"addition= "<<answer<<endl;
    }
};
class B:public A
{
    public:
    int m=40,n=10;
    void subtraction()
    {
        int subtract=m-n;
        cout<<"subtraction= "<<subtract<<endl;
    }
};
int main()
{
    A a1,a2,a3;
    B b1,b2,b3;
    b1.addition();
    b1.subtraction();
    return 0;
}