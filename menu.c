#include <stdio.h>
int main()
{
    int choice;
    int total_amount = 0;
    int Amount;
    char option;
    int quantity;
start:
    printf("1.pizza price = 180rs/pcs\n");
    printf("2.burger price = 100rs/pcs\n");
    printf("3.dosa price = 120rs/pcs\n");
    printf("4.idli price = 50rs/pcs\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have selected pizza\n");
    }
    else if (choice == 2)
    {
        printf("you have selected burger\n");
    }
    else if (choice == 3)
    {
        printf("you have selected dosa\n");
    }
    else if (choice == 4)
    {
        printf("you have selected idli\n");
    }
    printf("enter quantity: ");
    scanf("%d", &quantity);
    if (choice == 1)
    {
        Amount = quantity * 180;
    }
    else if (choice == 2)
    {
        Amount = quantity * 100;
    }
    else if (choice == 3)
    {
        Amount = quantity * 120;
    }
    else if (choice == 4)
    {
        Amount = quantity * 50;
    }
    total_amount += Amount;
    printf("\n Amount = %d", Amount);
    printf("\ntotalAmount = %d", total_amount);
    printf("\nDo you want to place more orders? y or n: ");
    scanf("%s", &option);
    if (option == 'y')
    {
        goto start;
    }
    else
    {
        printf("\ntotal bill is %d", total_amount);
        printf("\nvisit again");
    }
    return 0;
}