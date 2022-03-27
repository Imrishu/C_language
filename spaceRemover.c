/*
C program to remove spaces from a string
*/

#include <stdio.h>

void spaceRemover(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
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
    spaceRemover(string);
    printf("the modified string is\n");
    puts(string);
    return 0;
}