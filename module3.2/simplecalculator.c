//WAP to make simple calculator (operation include addition, subtraction, multiplication, division, modulo)

#include <stdio.h>
int main()
{
    int f, a;
    printf("enter two values: ");
    scanf("%d %d", &f, &a);

    printf("addition = %d\n", f + a);
    printf("subtraction = %d\n", f - a);
    printf("multiplication = %d\n", f * a);
    printf("division = %d\n", f / a);
    printf("modulo = %d\n", f % a);

    return 0;
}