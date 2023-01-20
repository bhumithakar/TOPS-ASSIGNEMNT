#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    char email[50];
    int age;
    printf("enter name:");
    gets(name);

    printf("enter email:");
    gets(email);

    printf("enter age:");
    scanf("%d", &age);

    printf("name : %s\n email : %s\n age : %d\n", name , email , age);

    fp=fopen("demo.txt","a");
    
    fprintf(fp, "name : %s\n email : %s\n age : %d\n", name , email , age);

    fprintf(fp, "---------------------------------------------------------\n");
    
    fclose(fp);

    return 0;
}