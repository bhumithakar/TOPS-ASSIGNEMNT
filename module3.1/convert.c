//WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
    int noofdays, years, days;

    printf("\n please enter the number of year: ");
    scanf("%d", &years);

    //printf("\n please enter the number of days: ");
    //scanf("%d", &days);

    years = noofdays / 365;
    days = (noofdays % 365) / 7;

    printf("\n years = %d", years);
    printf("\n days = %d", days);

    return 0;
}