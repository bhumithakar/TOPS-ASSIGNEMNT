#include<stdio.h>
struct employee
{
    char name[15];
    int id;
    int age;
};

int main()
{
    int f;
    printf("enter number of employee: ");
    scanf("%d", &f);
    struct employee a[f];

    for(int i =0;i< f;i++)
    {
    printf("number of employee%d", i);
        printf("enter name");
        scanf("%s", a[i].name);
        printf("enter id");
        scanf("%d", &a[i].id);
        printf("enter age");
        scanf("%d", &a[i].age);

        printf("name=%d id=%d age=%d", a[i].name, a[i].id, a[i].age);
    }
    return 0;
}