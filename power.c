#include <stdio.h>

int main()
{
    int number, power, num = 1;
    printf("enter the number\n");
    scanf("%d", &number);
    printf("enter the power\n");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        num = num * number;
    }
    printf("the required number is %d", num);
    return 0;
}