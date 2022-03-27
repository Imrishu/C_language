#include <stdio.h>

// void reverseArr(int arr[], int size)
// {
//     for (int i = size - 1; i >= 0; i--)
//         printf("%d ", arr[i]);
// }

void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
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
    printf("the original array is\n");
    print(arr, size);
    printf("\nthe reversed array is\n");
    reverseArr(arr, size);
    print(arr, size);
    return 0;
}