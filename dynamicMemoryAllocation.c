#include <stdio.h>
#include <stdlib.h>

int* oneDArray(int size)
{
    int* arr = (int*)malloc(size * sizeof(int));
    int* ptr = (int*)malloc(sizeof(int));
    ptr = arr;
    for(int i=0;i<size;i++)
    {
        (*ptr)=i;
        ptr++;
    }

    return arr;   
}

int main()
{
    int size=5;
    int* array = oneDArray(size);
    for(int i=0;i<size;i++)
    {
        printf("%d\t",*array);
        array++;
    }
    return 0;
}