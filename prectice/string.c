//name age mobile number

#include<stdio.h>
int main()
{
   char name[50];
   float age;
   unsigned long number;
   printf("enter your name:\n");
   gets(name);

   printf("enter your age\n");
   scanf("%f",&age);

   printf("enter your mobile number\n ");
   scanf("%lu",&number);
   
   printf("your name is %s", name);
   printf("your age is %f", age);
   printf("your number is %lu", number);

   return 0;
}