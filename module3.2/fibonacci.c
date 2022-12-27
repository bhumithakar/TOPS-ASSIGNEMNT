//WAP to print fibonacci series up to given numbers

#include<stdio.h>
int main()
{
    int number, i=0, f1=0, f2=1, next;
    printf("enter number of elements:");
    scanf("%d", &number);

    while(i<number)
    {
        if(i <= 1)
        {
            next = i;
        }
        else
        {
            next=f1+f2;
            f1=f2;
            f2=next;
        }
        printf("%d\t", next);
        i++;
    }
    return 0;
}