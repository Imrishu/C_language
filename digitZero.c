#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef short int Bool;

Bool validate(int n, int m)
{
    if (m < n && m > 0 && m < 999 && n > 1 && n <= 999)
        return TRUE;
    return FALSE;
}

void digitZero(int n, int m)
{
    int *ptr = (int *)malloc((n - m + 1) * sizeof(int));
    if (!validate(n, m))
    {
        perror("\nINVALID INPUT");
        // return NULL;
    }
    int *temp = ptr;
    for (int i = m; i <= n; i++)
    {
        if (n >= 100 && n < 1000)
        {
            // *temp = i;
            // temp++;
            printf("00%d ",i);
        }
        else if (n >= 10 && n < 100)
        {
            // *temp = i;
            // temp++;
            printf("0%d ",i);
        }
        else
        {
            // *temp = i;
            // temp++;
            printf("%d ",i);
        }
    }
    // return ptr;
}

int main()
{
    int n, m;
    printf("enter the m value\n");
    scanf("%d", &m);
    printf("enter the n value\n");
    scanf("%d", &n);
    digitZero(n, m);
    // for(int i=m;i<=n;i++)
    // printf("%d ", result[i]);
    return 0;
}