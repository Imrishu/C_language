#include <stdio.h>

int palindrome(int num)
{
    int rem, n = 0;
    while (num > 0)
    {
        rem = num % 10;
        n = n * 10 + rem;
        num = num / 10;
    }
    return n;
}

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int result = palindrome(num);
    if (result == num)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}