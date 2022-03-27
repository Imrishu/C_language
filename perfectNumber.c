#include <stdio.h>

int main()
{
    int num, sum = 0, rem;
    printf("enter the number\n");
    scanf("%d", &num);
    int temp = num;
    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        printf("the number is perfect number");
    else
        printf("not a perfect number");
    return 0;
}