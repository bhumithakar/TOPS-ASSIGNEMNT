//2.WAP to take 10 no. input from user and find out...

#include<stdio.h>
int main()
{
    int number,i;
    printf("enter  numbers:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        printf("\n%d",i);
    }
    if(i % 2 == 0)
    {
        printf("number is even",number);
    }
    else
    {
        printf("number is odd",number);
    }
    return 0;
}