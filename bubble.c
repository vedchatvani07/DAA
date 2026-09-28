#include <stdio.h>
#include <time.h>

int bubblesort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return 0;
}

int main()
{
    int arr[10] = {64, 34, 25, 12, 22, 11, 90, 5, 45, 30};
    int i;
    time_t start, end;
    double diff;

    start = clock();

    bubblesort(arr, 10);

    end = clock();

    diff = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nTime taken = %f seconds", diff);

    return 0;
}
