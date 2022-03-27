#include <stdio.h>
#include <stdlib.h>

int comp(const void *v1, const void *v2)
{
    return (*(int *)v1 - *(int *)v2);
}

int minCartoon(int *wt, int N, int K)
{
    qsort((void *)wt, N, sizeof(int), comp);
    int l = 0, r = N - 1;
    int count = 0;
    while (r >= 0 && l < r + 1)
    {
        if (wt[r] + wt[l] > K)
        {
            count++;
            r--;
        }
        else
        {
            count++;
            r--;
            l++;
        }
    }
    return count;
}

int main()
{
    int wt[100], K, N;
    scanf("%d", &N);
    scanf("%d", &K);
    for (int i = 0; i < N; i++)
        scanf("%d", &wt[i]);
    int cartoon = minCartoon(wt, N, K);
    printf("%d", cartoon);
    return 0;
}