//WAP to find factorial using recursion

#include<stdio.h>
int multiply = 1;
void factorial(int a)
{
    if(a>0)
    {
        multiply = multiply * a;
        factorial(a - 1);
    }
}

int main()
{
    factorial(5);
    printf("factorial=%d", multiply);

    return 0;
}