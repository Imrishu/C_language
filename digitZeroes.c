#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int digitCount(int num)
{
    int count = 0;
    while (num>0)
    {
        count++;
        num = num/10;
    }
    if(count>3)
        return -1;
    return count;
}

void prependZeroes(int n, int m)
{
    int len_n = digitCount(n);
    for(int i=m;i<=n;i++)
    {
        int len = digitCount(i);
        char num[4];
        int diff = len_n - len;
        //convert integer to string
        sprintf(num, "%d", i);

        char buffer[4] = {'0','0','0','\0'};
        //copy converted string into buffer at appropriate position
        strcpy(&buffer[diff], num);
        printf("%s\n", buffer);
    }
}

int main()
{
    int n, m;
    printf("enter the n value\n");
    scanf("%d",&n);
    printf("enter the m value\n");
    scanf("%d",&m);
    int len_n = digitCount(n);
    int len_m = digitCount(m);
    if(len_n == -1 || len_m == -1)
        perror("\ninvalid input");
    prependZeroes(n, m);
    return 0;
}