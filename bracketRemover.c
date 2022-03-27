/*
C program to remove brackets from an algebraic expression
*/

#include <stdio.h>

void bracketRemover(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '(' || string[i] == ')' || string[i] == '[' || string[i] == ']' || string[i] == '{' || string[i] == '}')
        {
            for (j = i; string[j] != '\0'; j++)
                string[j] = string[j + 1];
            string[j] = '\0';
            i--;
        }
    }
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    bracketRemover(string);
    printf("the modified string is\n");
    puts(string);
    return 0;
}