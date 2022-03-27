#include <stdio.h>

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[] , int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j] , &arr[j+1]);
        }
    }
}

void print(int arr[] , int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int array[10],size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\nthe original array is:\n");
    print(array,size);
    printf("\nthe bubble sorted array is :\n");
    bubble_sort(array,size);
    print(array,size);
    return 0;
}