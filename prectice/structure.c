#include<stdio.h>
int main()
{
    char a;
    int a1,a2;
    printf("enter number 1: ");
    scanf("%d", &a1);
    printf("enter symbol:+\n -\n *\n");
    scanf("%c", &a);
    printf("enter number 2: ");
    scanf("%d", &a2);
    switch (a)
    {
    case '+':
    {
        printf("addition=%d", a1 + a2);
        break;
    }    
    case '-':
    {
        printf("addition=%d", a1 - a2);
        break;
    }
    case '*':
    {
        printf("addition=%d", a1 * a2);
        break;
    }
    default:
    {
        printf("enter proper choice:");
        break;
    }
    }
    return 0;
}
