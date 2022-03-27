
#include <stdio.h>

int main()
{
    int num, rem, sum = 0, fact = 1;
    printf("enter the number\n");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        for (int i = rem; i >= 1; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        fact = 1;
        temp = temp / 10;
    }
    if (sum == num)
        printf("the number is a strong number");
    return 0;
}