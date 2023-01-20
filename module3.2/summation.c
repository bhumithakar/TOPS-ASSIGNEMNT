//write a program make a summation of given number(e.g.,1523 ans:-11)

#include<stdio.h>
int main()
{
    int n, sum = 0, f;
    printf("enter a number:",n);
    scanf("%d", &n);
    while(n>0)
    {
        f=n%10;
        sum+=f;
        n/=10;
    }
    printf("sum is %d",sum);
    return 0;
}