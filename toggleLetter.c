/*
C program to toggle each characters in a string i.e. to convert upper case characters to lower case characters 
and lower case characters to upper case characters in a string.
*/

#include <stdio.h>

void toggleLetter(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
        i++;
    }
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    printf("before toggle the string is\n");
    puts(string);
    toggleLetter(string);
    printf("after toggle the string is\n");
    puts(string);
    return 0;
}