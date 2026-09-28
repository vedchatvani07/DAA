#include <stdio.h>
#include <time.h>

int merge(int arr[], int low, int mid, int high)
{
    int temp[10];
    int i, j, k;

    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }

    return 0;
}

int mergesort(int arr[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
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

    mergesort(arr, 0, 9);

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
