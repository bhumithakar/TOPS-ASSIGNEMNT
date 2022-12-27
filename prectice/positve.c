#include<stdio.h>
int main()
{
    int num;
    printf("enter your num");
    scanf("%d", num);

    if(num<0)
    {
        printf("num is negetive");
    }
    else if(num>0)
    {
        printf("num is positive");
    }
    else(num=0)
    {
        printf("zero num");
    }
    return 0;
}