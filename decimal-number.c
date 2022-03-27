/*
Given a maximum of four digit to the base 17(10 -> A, 11 -> B, 12 -> C, 16 -> G) as input, output its decimal value.
Input:
23GF
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

int heptaToDecimalConverter(char *p)
{
    int power = 0;
    int decimal = 0;
    for (int i = strlen(p) - 1; i >= 0; i--)
    {
        int val = 0;
        switch (p[i])
        {
        case 'A':
            val = 10 * pow(17, power);
            break;
        case 'B':
            val = 11 * pow(17, power);
            break;
        case 'C':
            val = 12 * pow(17, power);
            break;
        case 'D':
            val = 13 * pow(17, power);
            break;
        case 'E':
            val = 14 * pow(17, power);
            break;
        case 'F':
            val = 15 * pow(17, power);
            break;
        case 'G':
            val = 16 * pow(17, power);
            break;
        case '0':
            val = 0;
            break;
        default:
            char num[1];
            num[0] = p[i];
            int x = atoi(num);
            if (x == 0)
            {
                perror("unknown characters found in string");
                return -1;
            }
            val = x * pow(17, power);
            break;
        }
        power++;
        decimal += val;
    }
    return decimal;
}
int main()
{
    char hepta[10];
    printf("Enter the heptadecimal number\n");
    gets(hepta);
    int result = heptaToDecimalConverter(hepta);
    printf("the converted decimal number is %d \n", result);

    return 0;
}
