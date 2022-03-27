/*
C program to find non repeating characters in a string. Non repeating characters are those that are present 
in the string only once.
*/

#include <stdio.h>

void non_repeatingCharacter(char string[], char frequency[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        frequency[string[i]]++;
    }
}

int main()
{
    char string[20], frequency[256] = {'\0'};
    printf("enter the string\n");
    gets(string);
    non_repeatingCharacter(string, frequency);
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
