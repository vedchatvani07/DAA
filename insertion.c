#include <stdio.h>
#include <time.h>

int insertionsort(int arr[], int n)
{
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

    insertionsort(arr, 10);

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
