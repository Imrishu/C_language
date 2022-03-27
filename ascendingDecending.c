// arrange first half of array in ascending order and second half in descending order

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ascendingOrder(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void descendingOrder(int arr[], int start, int size)
{
    for (int i = start; i < size; i++)
    {
        for (int j = start; j < size; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void print(int arr[], int start, int size)
{
    for (int i = start; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[20], size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("before operation the array is\n");
    print(arr, 0, size);
    int mid = (0 + size - 1) / 2;
    ascendingOrder(arr, mid + 1);
    printf("\nthe first half array is \n");
    print(arr, 0, mid + 1);
    descendingOrder(arr, mid + 1, size);
    printf("\nthe second half array is\n");
    print(arr, mid + 1, size);
    return 0;
}
