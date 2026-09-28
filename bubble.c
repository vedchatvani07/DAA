// Bubble Sort
#include <stdio.h>

int main()
{
    int a[10] = {64, 34, 25, 12, 22, 11, 90, 5, 45, 30};
    int i, j, temp;
    int count = 0;

    printf("Original array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            count++;

            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n\nNumber of comparisons = %d", count);

    return 0;
}
