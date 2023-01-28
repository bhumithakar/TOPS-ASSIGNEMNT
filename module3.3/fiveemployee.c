//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>
struct employee
{
    char name[20];
    char address[100];
    int age;
    long long int no;
};

int main()
{
    struct employee a[5];

    for(int i = 0;i< 5;i++)
    {
    printf("\nnumber of employee: %d\n", i+1);
        printf("enter name: ");
        scanf("%s", &a[i].name);
        printf("enter address: ");
        scanf("%s", &a[i].address);
        printf("enter age: ");
        scanf("%d", &a[i].age);
        printf("enter empno: ");
        scanf("%lld", &a[i].no);

        printf("name=%s\naddress=%s\nage=%d\nno=%lld\n", a[i].name, a[i].address, a[i].age, a[i].no);
    }
    return 0;
}