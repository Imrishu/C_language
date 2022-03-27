#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
                swap(&arr[j + 1], &arr[j]);
        }
    }
}

int secMinElement(int arr[], int size)
{
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[0])
            return arr[i];
    }
    perror("\nall elements are same");
    return -1;
}

int main()
{
    int arr[20], size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int result = secMinElement(arr, size);
    printf("the second minimum element of the array is %d", result);
    return 0;
}