#include <stdio.h>
#include <math.h>

int binaryToOctal(long binary)
{
    int temp, octal = 0, decimal = 0;
    int i = 1;
    int count = 0;
    while (binary != 0)
    {
        temp = binary % 10;
        count++;
        if (temp == 1)
            decimal = decimal + pow(2, count - 1);
        binary = binary / 10;
    }
    while (decimal != 0)
    {
        temp = decimal % 8;
        octal = octal + temp * i;
        decimal = decimal / 8;
        i = i * 10;
    }
    return octal;
}

int main()
{
    long binary;
    printf("enter the binary number\n");
    scanf("%d", &binary);
    int octal = binaryToOctal(binary);
    printf("the octal number is %d", octal);
    return 0;
}
