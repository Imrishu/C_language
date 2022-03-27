#include <stdio.h>

void pattern1(int row)
{
    for (int i = 0; i < row; i++)                                   // *
    {                                                               // * *
        for (int j = 0; j <= i; j++)                                // * * *
            printf("* ");                                           // * * * * 
        printf("\n");                                               // * * * * *
    }
}

int main()
{
    int row, column;
    printf("enter the Rows\n");
    scanf("%d", &row);
    printf("enter the columns\n");
    scanf("%d", &column);
    pattern1(row);

    return 0;
}