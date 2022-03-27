/*
    For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees
    per hour. Given the total time of travel in minutes is X. The task is to find the total traveling cost
    in rupees.
    Note: While converting minutes into hours, ceiling value should be considered as the total number of
    hours.
    For example: If the total travelling time is 90 minutes,
    i.e. 1.5 hours, it must be considered as 2 hours. 

    Input :
    20 ---Value of R1
    4 --- Value of N in hours
    40 --- Value of R2
    300 --- Value of X in minutes
    output :
    120 

    Constraints:
    1 < R1 < R2< 100
    1 < = N < = 10
    1 < = X < 10000
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int R1, N, X, R2, Rs = 0;
    scanf("%d", &R1);
    scanf("%d", &N);
    if (N < 0 || N > 10)
        return 0;
    scanf("%d", &R2);
    if (R1 <= 1 || R1 > R2 || R2 >= 100)
        return 0;
    scanf("%d", &X);
    if (X < 0 || X >= 10000)
        return 0;
    double time = ceil(((double)X) / 60);
    printf("%lf\n", time);
    if (time >= N)
    {
        Rs = N * R1;
        time = time - N;
    }
    else if (time < N)
    {
        Rs = time * R1;
        printf("%d", Rs);
        return 0;
    }
    if (time != 0)
    {
        Rs = Rs + time * R2;
    }
    printf("%d", Rs);
    return 0;
}