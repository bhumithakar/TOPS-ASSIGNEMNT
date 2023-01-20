#include<stdio.h>
void table(int number)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n", number,i,number*i);
    }
}

int main()
{
    int num;
    printf("enter num:");
    scanf("%d", &num);
    table(num);
    printf("%d", num);
    return 0;
}