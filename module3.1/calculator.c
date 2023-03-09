// write a program to make simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include <stdio.h>
int main()
{
    int d, r;
    printf("enter two values: ");
    scanf("%d %d", &d, &r);

    printf("addition = %d\n", d + r);
    printf("subtraction = %d\n", d - r);
    printf("multiplication = %d\n", d * r);
    printf("division = %d\n", d / r);
    printf("modulo = %d\n", d % r);

    return 0;
}