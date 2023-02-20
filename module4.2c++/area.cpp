/*
Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading
Rectangle: Area * breadth 
Triangle: ½ Area breadth 
Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;
class area
{
    public:
    void calculation(int length, int width)
    {
        int rectangle;
        rectangle = length * width;
        cout<<" enter the length and width of rectangle\n "<<endl;
        cout<<"area of rectangle: "<< rectangle;
    }

    void calculation(int base, int height, int a)
    {
        int triangle;
        triangle = 0.5 * base * height;
        cout<<" enter the base and height of triangle \n "<<endl;
        cout<<"area of triangle: "<< triangle;
    }

    void calculation(int redius)
    {   int circle;
        circle = 3.14 * redius * redius ;
        cout<<" enter redius of circle\n "<<endl;
        cout<<"area of circle: "<< circle;
    }
};
int main()
{
    area d1;
    d1.calculation(45,67);
    d1.calculation(67,98,68);
    d1.calculation(45);
    return 0;
}