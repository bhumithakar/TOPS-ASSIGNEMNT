//write a program you have to make a summation of first and last digit.(e.g.,1234 ans:-5)

#include<stdio.h>
int main()
{
    int num,temp;
    printf("enter number");
    scanf("%d", &num);
    int f = num % 10;
    while(num >0)
    {
        temp = num % 10;
        num = num / 10;
        if(temp > f)
        {
            f = temp;
        }
    }
    printf("max is %d\n", f);
    printf("addition= %d", f + temp);
    return 0;
}