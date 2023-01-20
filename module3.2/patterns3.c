/*
patterns
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

#include<stdio.h>
int main()
{
    int l=9,n=1;
    for(int i=1;i<=9;i++)
    {
        for(int y=1;y<=l;y++)
        {
            printf(" ");
        }
        l--;
        for(int m=1;m<=n;m++)
        {
            if(i%2 != 0)
            {
            printf("* ");
            }
        }
        n++;
        printf("\n");
    }
    return 0;
}