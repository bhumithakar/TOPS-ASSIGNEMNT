#include<stdio.h>
int main()
{
    int i=0,f;
    printf("printf number");
    scanf("%d",&i);
    while(i<11)
    {
        printf("%d*%d=%d\n",i,f=f*i);
        i++;
    }
    return 0;
}