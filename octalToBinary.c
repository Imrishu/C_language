#include <stdio.h>
#include <math.h>

long octalToBinary(int octal)
{
    int decimal = 0, binary = 0, temp, i = 0;
    while (octal != 0)
    {
        temp = octal % 10;
        decimal = decimal + temp * pow(8, i);
        i++;
        octal = octal / 10;
    }
    i = 1;
    while (decimal != 0)
    {
        temp = decimal % 2;
        binary = binary + temp * i;
        i = i * 10;
        decimal = decimal / 2;
    }
    return binary;
}

int main()
{
    int octal;
    printf("enter the octal number\n");
    scanf("%d", &octal);
    long binary = octalToBinary(octal);
    printf("the binary number is %d", binary);
    return 0;
}