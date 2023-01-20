// WAP to make addition, subtraction and multiplication of two matrix using 2-d array

#include <stdio.h>
int main()
{
    int array1[1][2];
    int array2[1][2];
    int addition[1][2];
    int subtraction[1][2];
    int multiplication[1][2];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter value 1: ");
            scanf("%d", &array1[i][j]);
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter value 2: ");
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addition[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("addition: %d\n", addition[i][j]);
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            subtraction[i][j] = array1[i][j] - array2[i][j];
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("subtraction: %d\n", subtraction[i][j]);
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            multiplication[i][j] = array1[i][j] * array2[i][j];
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("multiplication: %d\n", multiplication[i][j]);
        }
    }
    return 0;
}