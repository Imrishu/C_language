/*
Given a character, check if it is vowel or consonant. Vowels are in Uppercase ‘A’, ‘E’, ‘I’, ‘O’, ‘U’
and Lowercase ‘a’, ‘e’, ‘i’, ‘o’, ‘u’. and All other characters  both uppercase and lowercase 
(‘B’, ‘C’, ‘D’, ‘F’,’ b’, ‘c’,’ d’, ‘f’,…..)  are consonants.
*/

#include <stdio.h>
#include <stdlib.h>

char *vowelDetector(char c)
{
    char *buffer = (char *)malloc(20 * sizeof(char));
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        switch (c)
        {
        case 'A':
            sprintf(buffer, "it is a vowel");
            break;
        case 'E':
            sprintf(buffer, "it is a vowel");
            break;
        case 'I':
            sprintf(buffer, "it is a vowel");
            break;
        case 'O':
            sprintf(buffer, "it is a vowel");
            break;
        case 'U':
            sprintf(buffer, "it is a vowel");
            break;
        case 'a':
            sprintf(buffer, "it is a vowel");
            break;
        case 'e':
            sprintf(buffer, "it is a vowel");
            break;
        case 'i':
            sprintf(buffer, "it is a vowel");
            break;
        case 'o':
            sprintf(buffer, "it is a vowel");
            break;
        case 'u':
            sprintf(buffer, "it is a vowel");
            break;
        default:
            sprintf(buffer, "it is a consonant");
            break;
        }
    }
    else
        sprintf(buffer, "the entered character is not an alphabet");
    return buffer;
}

int main()
{
    char character;
    printf("enter a character\n");
    scanf("%c", &character);
    char *result = vowelDetector(character);
    printf("%s", result);
    return 0;
}
