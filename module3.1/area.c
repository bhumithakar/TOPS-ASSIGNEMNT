//WAP to find area of circle, rectangle and triangle

#include<stdio.h>
int main()
{
    float redius, area, length, width, base, height;
    //area of circle = PI * redius * redius,
    printf("enter redius of circle\n");
    scanf("%f", &redius);
    area = 3.14 * redius * redius;
    printf("area of circle : %f\n",area);

    //area of rectangle = lenght * width
    printf("enter the length and width of rectangle\n");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("area pf rectangle : %f\n", area);

    //area of triangle = 0.5*base*height
    printf("enter the base and height of triangle\n");
    scanf("%f %f", &base, &height);
    area = 1/2 * base * height;
    printf("area of triangle : %f\n",area);

    return 0;
}