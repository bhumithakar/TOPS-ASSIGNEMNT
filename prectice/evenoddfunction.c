#include<stdio.h>
void add(int a)
{   
    if(a % 2 == 0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
}

int main()
{
    add(2);
    add(3);
    add(5);
    add(4);
    return 0;
}