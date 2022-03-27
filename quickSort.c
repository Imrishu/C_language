#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
            start++;
        while (arr[end] > pivot)
            end--;
        if (start < end)
            swap(&arr[start], &arr[end]);
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quickSort(int arr[], int lb, int ub)
{
    int sort;
    if (lb < ub)
    {
        sort = partition(arr, lb, ub);
        quickSort(arr, lb, sort - 1);
        quickSort(arr, sort + 1, ub);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int array[10], size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    quickSort(array, 0, size - 1);
    print(array, size);
    return 0;
}