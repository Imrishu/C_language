/*
        Given an array Arr[N] of N integers and a positive integer K. The task is to divide the array into two
        sub-arrays from right after the Kth position and slide the left sub-array of K elements to the end.
        Constraints
        ● 1<N<=100
        ● -100<=Arr[i]<=100
        ● 1<=K<N
        input :
        5 -- Value of N
        {10, 20, 30, 40, 50} -- Elements of Arr []
        2 -- Value of K
        output : 
        30 40 50 10 20
*/

#include <stdio.h>

void arrRot(int arr[], int N, int k)
{
    for (int i = k; i < N; i++)
    {
        int temp = arr[N - 1];
        for (int j = N - 1; j >= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main()
{
    int arr[100], N, k;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d ", &arr[i]);
    scanf("%d", &k);
    arrRot(arr, N, k);
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}