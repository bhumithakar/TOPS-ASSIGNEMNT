#include<stdio.h>
int function(e,f)
{
    int add;
    add=e+f;
    return add;
}

int main()
{
    int a,b;
    int n;
    printf("enter number");
    scanf("%d %d", &a, &b);
    n = function(a,b);
    printf("%d", n);
    return 0;
}