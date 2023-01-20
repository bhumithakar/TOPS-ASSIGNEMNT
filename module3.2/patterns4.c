/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= 6 - 1; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}