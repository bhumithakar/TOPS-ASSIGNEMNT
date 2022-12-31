//2.WAP to take 10 no. input from user and find out...

#include<stdio.h>
int main()
{
    int aaray[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &aaray[i]);
    }
    for ( int i = 0; i < 10; i++)
    {
        if(aaray[i] % 2 == 0)
        {
            printf("%d is even\n", aaray[i]);
        }
        else
        {
            printf("%d is odd\n", aaray[i]);
        }
    }
    return 0;
}