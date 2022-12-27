//WAP to print number in reverse order e.g.:number = 64728---> reverse = 82746

#include<stdio.h>
int main()
{
    int number, reminder, reverse=0;
    printf("\n please enter the any number to reverse:");
    scanf("%d", &number);

    while(number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }
    printf("\nreverse of entered number is = : %d", reverse);

    return 0;
}