/*
C program to remove vowels from a string.
*/

#include <stdio.h>
#define N 20

void vowelRemover1(char string[], char array[])
{
    int count = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            i++;
        }
        else
        {
            array[count] = string[i];
            i++;
            count++;
        }
    }
}

void vowelRemover2(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
            string[j] = '\0';
            i--;
        }
    }
}

int main()
{
    char string[N], array[N] = {'\0'};
    printf("enter the string\n");
    gets(string);
    vowelRemover1(string, array);
    vowelRemover2(string);
    printf("the required string is\n");
    puts(array);
    puts(string);
    return 0;
}