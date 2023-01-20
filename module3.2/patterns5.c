/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include <stdio.h>
int main()
{
    int g=1;
    for (int h = 1; h< 5; h++)
    {
        for (int f = 1; f <= h; f++)
        {
            printf("%d    ",g);
            g++;
        }
        printf("\n");
    }
    return 0;
}