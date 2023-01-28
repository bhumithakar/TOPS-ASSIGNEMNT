// WAP find out length of string without using inbuilt function

#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char name[10] = "hello";
    while (name[i] != '\0')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}