#include<stdio.h>
int main()
{
    int array[100],i, j, temp, size;

    printf("\n please enter the number of elements in an array: ");
    scanf("%d", &size);

    printf("\n please enter %d elements of an array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\n array of elements in ascending order are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}