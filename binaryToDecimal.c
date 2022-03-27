#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary)
{
    int sum = 0, count = 0, temp;
    while (binary != 0)
    {
        temp = binary % 10;
        count++;
        if (temp == 1)
            sum = sum + pow(2, count - 1);
        binary = binary / 10;
    }
    return sum;
}

int main()
{
    int binary;
    printf("enter the binary nnumber\n");
    scanf("%d", &binary);
    int decimal = binaryToDecimal(binary);
    printf("the decimal number is %d", decimal);
    return 0;
}