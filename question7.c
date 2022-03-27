

#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 1; j * j * j <= i; j++)
        {
            if (j * j * j == i)
            {
                printf("%d ", j * j * j);
                break;
            }
        }
    }
    return 0;
}