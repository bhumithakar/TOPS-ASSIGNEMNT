#include<stdio.h>
int main()
{
    int array1[2][3];
    int array2[2][3];
    int addition[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter value 1: ");
            scanf("%d", &array1[i][j]);
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter value 2: ");
            scanf("%d", &array2[i][j]);
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        addition[i][j]= array1[i][j] + array2[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
        printf("%d",addition[i][j]);
        }
    }
    return 0;
}