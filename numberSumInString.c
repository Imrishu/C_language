/*
C program to count the sum of numbers in a string
*/

#include <stdio.h>

int sumOfNumbers(char string[])
{
    int i, sum = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            sum += (string[i] - '0');
        }
    }
    return sum;
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    int val = sumOfNumbers(string);
    printf("the sum is %d", val);
    return 0;
}