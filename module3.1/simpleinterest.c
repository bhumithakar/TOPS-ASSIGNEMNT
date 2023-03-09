//WAP to find simple interest

#include<stdio.h>
int main()
{
    int principal_balance, interest_rate;
    int year, simple_interest;
    //simple interest = principal * interest rate * year/100
    printf("enter your principal value:\n");
    scanf("%d",&principal_balance);
    printf("enter your interest_rate\n");
    scanf("%d",&interest_rate);
    printf("enter year\n");
    scanf("%d",&year);
    simple_interest = (principal_balance * interest_rate * year )/ 100;
    printf("simple inteterst =%d",&simple_interest);
    return 0;
}