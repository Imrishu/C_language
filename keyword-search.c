/*
One programming language has the following keywords that cannot be used as identifiers:
break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
Write a program to find if the given word is a keyword or not
Input #1: defer
Output: defer is a keyword
Input #2: While
*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>

const int rows = 16;
const int columns = 10;

char words[rows][columns] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};

char *keywordSearch(char *word)
{
    char *buffer = (char *)malloc(30 * sizeof(char));
    for (int i = 0; i < rows; i++)
    {
        if (strcmp(words[i], word) == 0)
        {
            sprintf(buffer, "the word is a keyword");
            return buffer;
        }
    }
    sprintf(buffer, "the word is not a keyword");
    return buffer;
}

int main()
{
    char *result;
    char word[10];
    printf("enter the word\n");
    gets(word);
    result = keywordSearch(word);
    printf("%s", result);
    return 0;
}
