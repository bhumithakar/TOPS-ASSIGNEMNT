/*Write a program to make multiplication of 2-D matrix

make sure each business logic is denoted with appropriate comments and make your code interactive and represent clean and clear output on your console screen.

addere to the coding principles

to accomplish this program you have to use 2-dimensional array concept

firstly take the matrix input from user and display elements in matrix format:

then show the final matrix:
*/
 
#include <stdio.h>
int main()
{
    int A[2][2], B[2][2], result[2][2], i, j, l;
    printf("\n------------------Matrix 1------------------\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter elements : ");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n------------------Matrix 2------------------\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter elements : ");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n------------------result : Multiplication Matrix------------------\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (l = 0; l < 2; l++)
            {
                result[i][j] = result[i][j] + A[i][l] * B[l][j];
            }
            printf("%d", result[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
    return 0;
}