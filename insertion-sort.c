#include <stdio.h>


void insertion_sort(int arr[] , int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int array[10],size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("the origianl array is :\n");
    print(array , size);
    printf("\nthe insertion sorted array is :\n");
    insertion_sort(array,size);
    print(array,size);
    return 0;
}
