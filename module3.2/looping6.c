//6.sum of odd numbers WAP to print table up to given numbers

#include<stdio.h>
int main()
{
    int i, number, sum=0;
    printf("please enter the maximum limit value:\n");
    scanf("%d", &number);

    printf("even number between 0 and %d\t are:\n", number);
    for(i=1; i<=number; i++)
    {
        if(i%2 != 0)
        {
            printf("%d",i);
            sum = sum + i;
        }
    }
    printf("the sum of all odd number upto %d = %d\n", number, sum);

    return 0;
}