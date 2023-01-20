//write a prgram to find out the max from given number(e.g.,no: -1562 max number is 6)

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
    return 0;
}