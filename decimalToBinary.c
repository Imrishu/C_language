#include <stdio.h>

long decimalToBinary(int decimal)
{
    int sum = 0, i = 1, temp;
    while (decimal != 0)
    {
        temp = decimal % 2;
        sum = sum + temp * i;
        i = i * 10;
        decimal = decimal / 2;
    }
    return sum;
}

int main()
{
    int decimal;
    printf("enter the decimal number\n");
    scanf("%d", &decimal);
    int binary = decimalToBinary(decimal);
    printf("the binary number is %ld", binary);
    return 0;
}