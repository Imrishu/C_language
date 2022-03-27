/*
        steps to climp to reach the top with maximum of 2 steps at a time and minimum 1 step
        input:               output :
            N = 1                   1   (1)
        input:               output :
            N = 2                   1+1 or 2   (2)
        input:               output :
            N = 3                   1+1+1 or 1+2 or 2+1   (3)
        input:               output :
            N = 4                   1+1+1+1 or 2+2 or 1+1+2 or  2+1+1 or 1+2+1  (5)
*/

#include <stdio.h>

int steps(int N)                        // memoization approach
{
    int arr[50];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= N; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[N];
}

// int steps(int N)                     //recursive approach
// {
//     if (N == 0)
//         return 0;
//     else if (N == 1)
//         return 1;
//     else if (N == 2)
//         return 2;
//     return steps(N - 1) + steps(N - 2);
// }

int main()
{
    int N;
    scanf("%d", &N);
    int ways = steps(N);
    printf("%d", ways);
    return 0;
}