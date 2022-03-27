#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, limit;
    printf("enter the limit of series\n");
    scanf("%d", &limit);
    printf("the fibonacci series upto %d is\n %d %d ", limit, n1, n2);
    for (int i = 2; i < limit; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
    }
    return 0;
}