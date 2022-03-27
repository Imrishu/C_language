/*
C program to count the number of vowels in a string.
*/

#include <stdio.h>

int vowelCount(char string[])
{
    int count = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            count++;
        i++;
    }
    return count;
}

int main()
{
    char string[20];
    printf("enter the string\n");
    gets(string);
    int result = vowelCount(string);
    printf("the number of vowel in the string is %d", result);
    return 0;
}