#include<stdio.h>
int main()
{
    int array1[5];
    int array2[5];
    int addition[5];

    for(int i=0; i<5; i++)
    {
        printf("enter value 1");
        scanf("%d", &array1[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("enter value 1");
        scanf("%d", &array2[i]);
    }
    for(int i=0; i<5; i++)
    {
        addition[i]= array1[i] + array2[i];
    }
    for(int i=0; i<5; i++)
    {
        printf("%d",addition[i]);
    }
    return 0;
}