#include <stdio.h>

int arrSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[20], size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int sum = arrSum(arr, size);
    printf("the sum of the elements of the array is %d", sum);
    return 0;
}