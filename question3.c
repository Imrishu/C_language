/*
        series -----   00006 , 00028, 00066, 00120, 00190, 00276, ......
        N -- is number in the base of the pyramid
        top contains a single element

        input : 2
        output :
                    00006
                    00028 00066
*/

#include <stdio.h>

int main()
{
        int N, a = 0, b = 3, i, j, num;
        scanf("%d", &N);
        if (N < 1 || N > 14)
                return 0;
        for (i = 1; i <= N; i++)
        {
                for (j = 1; j <= i; j++)
                {
                        a = a + 2;
                        if (i == 1)
                                b = 3;
                        else
                                b = b + 4;
                        num = a * b;
                        printf("%05d ", num);
                }
                printf("\n");
        }
        return 0;
}
