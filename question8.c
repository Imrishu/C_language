/*
        Given an array Arr[] of N integer numbers. The task is to rewrite the array by putting all multiples
        of 10 at the end of the given array.
        Note: The order of the numbers which are not multiples of 10 should remain unaltered, and similarly,
        the order of all multiples of 10 should be unaltered.
        For e.g.
        Suppose N = 9 and Arr[]={10, 12, 5, 40, 30, 7, 50, 9, 10}
        You have to push all multiple of 10 at the end of the Arr[]
        Hence, the output is 12 5 7 9 10 40 30 50 10.

        1 < N < = 100
        1 < = Arr[i] < = 100
        Input Format for Testing:
        1. First input line: Accept a single positive integer value for N representing the size of Arr[].
        2. Second Input line: Accept N number of integer values separated by a new line.

        Output Format for Testing:
        1. The output must be N integer numbers separated by a single space character (See the output format in examples).
        2. Additional messages in the output will result in the failure of test cases.
*/

#include <stdio.h>

int main()
{
    int Arr[100], N, j = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &Arr[i]);
        if (Arr[i] < 0 || Arr[i] > 100)
            return 0;
    }
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] % 10 != 0)
        {
            printf("%d ", Arr[i]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] % 10 == 0)
        {
            printf("%d ", Arr[i]);
        }
    }
    return 0;
}