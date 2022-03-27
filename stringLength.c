/*
Length of the string without using strlen() function
*/

#include <stdio.h>

int stringLength(char string[])
{
    int count = 0;
    int i = 0;
    while (string[i] != '\0')
    {
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
    int result = stringLength(string);
    printf("the lenght of the string is %d", result);
    return 0;
}