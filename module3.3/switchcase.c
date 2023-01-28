//

#include<stdio.h>
int main()
{
    char a;
    int f, d;
    printf("enter your choice:\n addition:+\n subtraction:-\n multiplication:*\n division:/\n");
    scanf("%c", &a);
    printf("enter two values: ");
    scanf("%d %d", &f, &d);
    switch (a)
    {
    case '+':
    {
        printf("addition=%d", f + d);
        break;
    }    
    case '-':
    {
        printf("addition=%d", f - d);
        break;
    }
    case '*':
    {
        printf("addition=%d", f * d);
        break;
    }
    case '/':
    {
        printf("addition=%d", f / d);
        break;
    }
    default:
    {
        printf("enter proper choice: ");
        break;
    }
    }
    return 0;
}