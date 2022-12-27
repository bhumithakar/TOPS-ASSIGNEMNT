#include<stdio.h>
int main()
{
    int choice;
    int total_amount = 0;
    int amount;
    char option;
    int quantity;
    start;
    printf("1.pizza price = 180rs/pcs\n 2.burger price = 100rs/pcs\n 3.dosa price = 120rs/pcs\n 4.idli price = 50rs/pcs\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You have selected pizza");
    }
    else if(choice==2)
    {
        printf("you have selected burger");
    }
    else if(choice==3)
    {
        printf("you have selected dosa");
    }
     else if(choice==4)
    {
        printf("you have selected idli");
    }
    
    return 0;



}