// WAP to show difference between structure and union

#include <stdio.h>
struct employee
{
    int age;
    long long int number;
    char name[20];
    char address[20];
    float salary;
};

union person
{
    int age;
    long long int number;
    char name[20];
    char address[20];
    float salary;
};

int main()
{
    printf("Size of structure is %d.\n", sizeof(struct employee));
    printf("Size of union is %d.\n", sizeof(union person));

    return 0;
}