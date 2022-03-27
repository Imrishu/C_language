
#include <stdio.h>

void frequency(int arr[], int freq[], int size)
{
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
}

int main()
{
    int arr[20], freq[100] = {0}, size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the 2-digit number only\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    frequency(arr, freq, size);
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] != 0)
            printf("the %d has occured %d times\n", i, freq[i]);
    }
    return 0;
}