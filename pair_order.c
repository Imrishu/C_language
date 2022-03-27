#include <stdio.h>
#include <malloc.h>


char* order(int a , int b)
{
    char* buffer = (char*)malloc(30 * sizeof(char));
    if(a>b)
    {
        sprintf(buffer,"the pair (%d,%d) is in descending order \n",a,b);
        return buffer;
    }
    else if(a==b)
    {
        sprintf(buffer,"the pair (%d,%d) is equal \n",a,b);
        return buffer;
    }
    else
    {
        sprintf(buffer,"the pair (%d,%d) is in ascending order \n",a,b);
        return buffer;
    }
}



int main()
{
    int num1 ,num2;
    char* result;
    printf("enter the first number \n");
    scanf("%d",&num1);
    printf("enter the second number \n");
    scanf("%d",&num2);
    result = order(num1 ,num2);
    printf("%s",result);
    return 0;
}