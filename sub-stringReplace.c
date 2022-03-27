/*
C program to replace a substring in a string
*/
#include <stdio.h>
#include <string.h>

void subStringReplace(char str[], char substr[], char replace[], char newstr[], int len1)
{
    int i, j = 0, start = 0, flag = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == substr[j])
        {
            if (!flag)
                start = i;
            j++;
            if (substr[j] == '\0')
                break;
            flag = 1;
        }
        else
            start = j = flag = 0;
    }
    if (substr[j] == '\0' && flag)
    {
        for (i = 0; i < start; i++)
            newstr[i] = str[i];
        for (j = 0; j < len1; j++)
        {
            newstr[i] = replace[j];
            i++;
        }
        for (j = start + strlen(substr); j < strlen(str); j++)
        {
            newstr[i] = str[j];
            i++;
        }
        newstr[i] = '\0';
    }
    else
        perror("\nnot a substring");
}

int main()
{
    char string[20], substring[20], replacestring[20], newstring[20];
    printf("enter the main string\n");
    gets(string);
    printf("enter the sub-string\n");
    gets(substring);
    printf("enter the string to be replaced\n");
    gets(replacestring);
    int len1 = strlen(replacestring);
    subStringReplace(string, substring, replacestring, newstring, len1);
    printf("the new string is\n");
    puts(newstring);
    return 0;
}
