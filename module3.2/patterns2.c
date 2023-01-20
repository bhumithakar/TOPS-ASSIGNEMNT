/*
patterns
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>
int main()
{
    for (int a = 65; a <= 80; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            for (int f = 1; f <= b; f++)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
    }
    return 0;
}