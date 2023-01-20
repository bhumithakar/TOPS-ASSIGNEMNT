#include<stdio.h>
void table(int k, int n)
{
    int add,multi,sub;
    add=k+n;
    multi=k*n;
    sub=k-n;
    
    printf("%d\n",add);
    printf("%d\n",multi);
    printf("%d\n",sub);
}

int main()
{
    int d, r;
    printf("\n enter two values: ");
    scanf("%d %d", &d, &r);
    table(d,r);
    return 0;
}