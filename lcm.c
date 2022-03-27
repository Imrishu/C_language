#include <stdio.h>

int lcm(int n1, int n2)
{
    int num1 = n1;
    int num2 = n2;
    while (num1 != num2)
    {
        if (num1 > num2)
            num2 = num2 + n2;
        else
            num1 = num1 + n1;
    }
    return num1;
}

int main()
{
    int num1, num2;
    printf("enter the number 1\n");
    scanf("%d", &num1);
    printf("enter the number 2\n");
    scanf("%d", &num2);
    int result = lcm(num1, num2);
    printf("the lcm of %d and %d is %d", num1, num2, result);
    return 0;
}