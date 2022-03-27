/*
C program to check if two strings are anagram or not. If two strings have same frequency of  characters and 
only the order of characters is different then such strings are said to be anagram.
*/

#include <stdio.h>
#include <string.h>

void characterFrequency(char string1[], char string2[], char freq1[], char freq2[])
{
    int i, j;
    for (i = 0; string1[i] != '\0'; i++)
    {
        freq1[string1[i]]++;
    }
    for (j = 0; string2[j] != '\0'; j++)
    {
        freq2[string2[j]]++;
    }
}

int anagramChecker(char string1[], char string2[], char freq1[], char freq2[], int len1, int len2)
{
    int flag = 0, check = 0;
    if (len1 == len2)
    {
        characterFrequency(string1, string2, freq1, freq2);
        for (int i = 0; i < 256; i++)
        {
            if (freq1[i] != 0 && freq2[i] != 0)
            {
                if (freq1[i] != freq2[i])
                    flag = 1;
            }
        }
        if (flag == 0)
            check = 1;
        else
            check = 0;
    }
    return check;
}

int main()
{
    char string1[20], string2[20], freq1[256] = {'\0'};
    char freq2[256] = {'\0'};
    printf("enter the string1\n");
    gets(string1);
    int len1 = strlen(string1);
    printf("enter the string2\n");
    gets(string2);
    int len2 = strlen(string2);
    int result = anagramChecker(string1, string2, freq1, freq2, len1, len2);
    if (result == 1)
        printf("the two strings are Anagram");
    else
        printf("the two strings are NOT Anagram");
    return 0;
}
