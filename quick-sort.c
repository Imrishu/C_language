#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int ub, int lb)
{
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
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

void Quick_sort(int arr[], int ub, int lb)
{
    if (lb < ub)
    {
        int loc = partition(arr, ub, lb);
        Quick_sort(arr, loc - 1, lb);
        Quick_sort(arr, ub, loc + 1);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int array[10], size, lb, ub;
    printf("enter the size of array\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("the original array is :\n");
    print(array, size);
    ub = size-1;
    lb = 0;
    Quick_sort(array , ub , lb);
    printf("\nthe quick sorted array is :\n");
    print(array , size);
    return 0;
}