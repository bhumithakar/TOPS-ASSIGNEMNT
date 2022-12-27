//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer number\n");
    scanf("%d", &n);

    // () ? () : ();
    //   condition         true            false
    // (expression1) ? (expression2) : (expression3);

    (n % 2 == 0) ?
    (printf("%d is even number\n", n)) :
    (printf("%d is odd number\n", n)) ;

    return 0;
}