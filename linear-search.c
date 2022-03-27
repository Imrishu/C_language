#include <stdio.h>

int linear_search(int arr[] ,int val ,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==val)
        {
            return i+1;
        }
    }
    return -1;
}

void print(int arr[] , int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int array[10],size,val;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("the given array is :\n");
    print(array , size);
    printf("\nenter the element to search\n");
    scanf("%d",&val);
    int result = linear_search(array , val , size);
    (result == -1)?printf("the value %d is not present in the list",val):printf("the value %d is present at %d position",val,result);
    
        
    return 0;
}