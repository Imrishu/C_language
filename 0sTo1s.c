//       3740505040
//       3741515141

#include <stdio.h>

int digit0To1(int num)
{
    int temp, sum = 0, i = 1;
    while (num != 0)
    {
        temp = num % 10;
        if (temp == 0)
            sum = sum + 1 * i;
        else
            sum = sum + temp * i;
        i = i * 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int number = digit0To1(num);
    printf("the changed number is %d", number);
    return 0;
}
