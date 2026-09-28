#include <stdio.h>
#include <time.h>

int selectionsort(int arr[], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    selectionsort(arr, 10);

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
