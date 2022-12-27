// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
/*
#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);


    return 0;
}


*/

// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  float number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%f", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2f",sum);

  return 0;
}

