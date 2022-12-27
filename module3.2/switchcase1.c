//WAP to show
//1.monay to sunday using switch case

#include<stdio.h>
int main()
{
    int day;
    printf("enter your number");
    scanf("%d", &day);
    switch(day)
    {
    case 1:
    {
        printf("monday\n");
        break;
    }
    case 2:
    {
        printf("tuesay\n");
        break;
    }
    case 3:
    {
        printf("wednesay\n");
        break;
    }
    case 4:
    {
        printf("thursday\n");
        break;
    }
    case 5:
    {
        printf("friday\n");
        break;
    }
    case 6:
    {
        printf("saturday\n");
        break;
    }
    case 7:
    {
        printf("sunday\n");
        break;
    }
    default:
    {
        printf("enter correct number");
        break;
    }
    }
    
    return 0;
}