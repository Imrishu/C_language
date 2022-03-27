#include <stdio.h>

int hcf(int n1, int n2)
{
    int factor;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            factor = i;
    }
    return factor;
}

int main()
{
    int num1, num2;
    printf("enter the number 1\n");
    scanf("%d", &num1);
    printf("enter the number 2\n");
    scanf("%d", &num2);
    int result = hcf(num1, num2);
    printf("the hcf of %d and %d is %d", num1, num2, result);
    return 0;
}