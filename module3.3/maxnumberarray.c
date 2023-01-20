//Write a program to find out the max number from given array using function

#include<stdio.h>
int main()
{
    int arr[5],max;
    for (int i = 0; i < 5; i++)
    {
    printf("enter number");
    scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < 5; i ++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d is max", max);
    return 0;
}