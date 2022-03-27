/*
a C program to find if the given string is palindrome or not. A palindrome string is one that reads the 
same forward as well as backward. Strings like ‘redivider’, ‘deified’, ‘level’, ‘mam’ are examples of 
palindrome string. We need to find whether the first and last, second and second last, and so in the string 
are equal or not in order to find if the given string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int palindromeString(char string[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (string[i] == string[len - i - 1])
            ;
        else
        {
            perror("\nnot palindrome");
            return -1;
        }
    }
    return 1;
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    int len = strlen(string);
    int result = palindromeString(string, len);
    if (result == 1)
        printf("palindrome string");
    return 0;
}