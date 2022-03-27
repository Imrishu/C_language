#include <stdio.h>

int binary_search(int arr[] , int val , int lb , int ub)
{
    int mid;
    if(ub>=lb)
    {
        mid = (lb + ub)/2;
        if(arr[mid] == val)
            return (mid+1);
        if(arr[mid]>val)
            return binary_search(arr , val , lb , mid-1);
        return binary_search(arr , val , mid+1 , ub);
    }
    return -1;
}

void print(int arr[] ,int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int array[10], val ,size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int ub = size-1;
    int lb = 0;
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("the entered array is\n");
    print(array , size);
    printf("\nenter the value to be searched\n");
    scanf("%d",&val);
    int result = binary_search(array , val , lb , ub);
    if(result == -1)
    printf("the value %d is not present in the array\n",val);
    else
        printf("the value %d is present at positon %d",val,result);
    return 0;
}
