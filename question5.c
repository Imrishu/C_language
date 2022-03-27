/*
    input : 
            N = 13
    output : 
            no. of coins = 6
            no. of five = 1
            no. of two = 1
            no. of one = 2    
*/

#include <stdio.h>

int main()
{
    int N, five, two, one;
    scanf("%d", &N);
    two = 0;
    one = 0;
    five = (N - 4) / 5;
    if ((N - 5 * five) % 2 == 0)
        one = 2;
    else
        one = 1;
    two = (N - 5 * five - one) / 2;
    printf("%d\n", one + two + five);
    printf("%d\n", five);
    printf("%d\n", two);
    printf("%d\n", one);
    return 0;
}
