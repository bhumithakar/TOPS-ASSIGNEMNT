#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int f=1;f<=i;f++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}