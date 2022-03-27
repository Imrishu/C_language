#include <stdio.h>

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[],int size)
{
    int i,j,min;
    for(i=0;i<size-1;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        swap(&arr[i] , &arr[min]);
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
    printf("the original array is :\n");
    print(array,size);
    printf("\nthe selection sorted array is :\n");
    selection_sort(array,size);
    print(array,size);
    return 0;
}