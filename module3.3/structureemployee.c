// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
struct employee
{
    char name[20];
    char address[100];
    int age;
    long long int no;
};

int main()
{
    struct employee a1;

    printf("enter details: \n");
    printf("enter name: ");
    scanf("%s", &a1.name);
    printf("enter address: ");
    scanf("%s", &a1.address);
    printf("enter age: ");
    scanf("%d", &a1.age);
    printf("enter no: ");
    scanf("%lld", &a1.no);

    printf("name=%s\naddress=%s\nage=%d\nno=%lld\n", a1.name, a1.address, a1.age, a1.no);
    return 0;
}