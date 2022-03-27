/*
C program to print the string in reverse order
*/

#include <stdio.h>
#include <string.h>

void reverseString(char string[], char array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        array[i] = string[len - i - 1];
    }
}

int main()
{
    char string[20], array[20] = {'\0'};
    printf("enter the string\n");
    gets(string);
    int len = strlen(string);
    reverseString(string, array, len);
    printf("the reversed string is\n");
    puts(array);
    return 0;
}