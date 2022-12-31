/*
take input of array from user and print table of elements of array
*/

#include<stdio.h>
int main()
{
    int i,j;
    int array[3];
    for(int i = 0; i<3;i++)
    {
        printf("enter number\n");
        scanf("%d",&array[i]);
        for(j=1;j<10;j++)
        {
            printf("%d*%d=%d\n",array[i],j,array[i]*j);
        }
    }
    return 0;
}