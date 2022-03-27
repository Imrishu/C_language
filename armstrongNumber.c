//  C Program Armstrong Numbers Between Two Intervals

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, digit = 0, sum = 0;
    printf("enter the starting interval\n");
    scanf("%d", &start);
    printf("enter the ending interval\n");
    scanf("%d", &end);
    for (int i = start; i <= end; i++)
    {
        int temp1 = i;
        int temp2 = i;
        while (temp1 != 0)
        {
            temp1 = temp1 / 10;
            digit++;
        }
        while (temp2 != 0)
        {
            int rem = temp2 % 10;
            sum = sum + pow(rem, digit);
            temp2 = temp2 / 10;
        }
        if (sum == i)
            printf("%d is armstrong number\n", i);
        digit = 0;
        sum = 0;
    }
    return 0;
}