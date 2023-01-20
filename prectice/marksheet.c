#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float percentage;
    printf("enter your marks\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    total=a+b+c+d+e;
    printf("total=%d", total);
    percentage = ((float)total/500)*100;
    printf("percentage=%f", percentage);

    if(percentage<100 && percentage>90)
    {
        printf("A+");
    }
    else if(percentage<=90 && percentage>75)
    {
        printf("B+");
    }
    else if(percentage<=75 && percentage>60)
    {
        printf("C+");
    }
    else if(percentage<=60 && percentage>35)
    {
        printf("D+");
    }
    else if(percentage<=35)
    {
        printf("you are fail");
    }
    return 0;
}