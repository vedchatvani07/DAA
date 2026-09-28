#include <stdio.h>
#include <time.h>

int partition(int arr[], int low, int high)
{
    int pivot, i, j, temp;

    pivot = arr[high];
    i = low - 1;

    for(j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

int quicksort(int arr[], int low, int high)
{
    int pi;

    if(low < high)
    {
        pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
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

    quicksort(arr, 0, 9);

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
