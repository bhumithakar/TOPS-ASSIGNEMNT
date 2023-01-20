/*
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
int main()
{   
    int a=65;
        for(int d=1;d<=5;d++)
        {
            for(int j=1;j<=d;j++)
            {
                printf("%c ", a++);
            }
            a=65;
            printf("\n");
        }
    return 0;
}