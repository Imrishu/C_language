/*
C program to calculate frequency of characters in the string
*/

#include <stdio.h>

void characterFrequency(char string[], char frequency[])
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
    characterFrequency(string, frequency);
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
            printf("the frequency of %c is %d\n", i, frequency[i]);
    }
}