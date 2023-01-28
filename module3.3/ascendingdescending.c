// WAP to take two array input from user and sort them in ascending or descending order as per user's choice

#include <stdio.h>
int main()
{
    int a[20], n;
    printf("array size:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n\n.............\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n\nascending :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n\n..............\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n\ndescendimg :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n\n.................\n");
    return 0;
}