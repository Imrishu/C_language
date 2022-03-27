#include <stdio.h>

void arrCircularRotation(int arr[], int size, int k)
{
    int temp;
    for (int i = 0; i < k; i++)
    {
        temp = arr[size - 1];
        for (int j = size - 1; j >= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[10], size, k;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the number of rotate\n");
    scanf("%d", &k);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("before rotation the array is\n");
    print(arr, size);
    arrCircularRotation(arr, size, k);
    printf("\nafter rotation the array is\n");
    print(arr, size);
    return 0;
}