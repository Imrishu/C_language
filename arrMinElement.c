#include <stdio.h>

int main()
{
    int arr[20], size, min;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    min = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[min])
            min = i;
    }
    printf("the minimum element of the array is %d", arr[min]);
    return 0;
}