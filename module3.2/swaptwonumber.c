//WAP to swap two numbers without using third variable

#include<stdio.h>
int main()
{
    int a, f;
    printf("\nenter first number and second number: ");
    scanf("%d %d", &a, &f);
    a=a+f;
    f=a-f;
    a=f-a;
    printf("a=%d\n f=%d\n", a,f);
    
    return 0;
}