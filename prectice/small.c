#include<stdio.h>
int main()
{
    int arr[10],small;
    for (int i = 0; i < 10; i++)
    {
    printf("enter number");
    scanf("%d", &arr[i]);
    }
    small = arr[0];
    for (int i = 0; i < 10; i ++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("%d is smallest", small);
    return 0;
}