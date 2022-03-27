// 0-1 knapsack problem

#include <stdio.h>
#include <math.h>

int knapsack(int w1[], int val[], int W, int n)
{
    if (n == 0 || W == 0)
        return 0;
    for (int i = 0; i < n; i++)
    {
        if (w1[i] <= W)
            return val[n - 1] + max(knapsack(w1, val, W - val[n - 1], n - 1), knapsack(w1, val, W, n - 1));
        else
            return knapsack(w1, val, W, n - 1);
    }
}

int main()
{
    int w1[100], val[100], W, n;
    printf("enter the size\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the weight and price\n");
        scanf("%d", &w1[i]);
        scanf("%d", &val[i]);
    }
    printf("enter the capacity of the knapsack\n");
    scanf("%d", &W);
    int value = knapsack(w1, val, W, n);
    printf("maximum profit is %d", value);
    return 0;
}