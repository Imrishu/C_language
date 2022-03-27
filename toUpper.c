/*
C program to capitalize the first and last letter of each word of a string i.e. to convert first and last 
letter of each word into uppercase
*/

#include <stdio.h>
#include <ctype.h>

void firstLast_toUpper(char string[])
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[0] >= 'a' && string[0] <= 'z')
        {
            string[0] = toupper(string[0]);
        }
        else if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
        {
            string[i - 1] = toupper(string[i - 1]);
            string[i + 1] = toupper(string[i + 1]);
        }
    }
    string[i - 1] = toupper(string[i - 1]);
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    firstLast_toUpper(string);
    printf("the modified string is\n");
    puts(string);
    return 0;
}