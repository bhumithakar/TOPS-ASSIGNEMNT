/*
patterns
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
    for(int k=1;k<=5;k++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}