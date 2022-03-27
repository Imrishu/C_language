#include <stdio.h>

int main()
{
    int num, factor;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("the factor of %d is\n", num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }
    return 0;
}