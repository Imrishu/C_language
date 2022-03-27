/*
C program to remove all characters from string except alphabets. In the process to do this all the special 
characters (!,@,#,etc.) and numeric characters (1,2,3,etc.) need to removed from the string. To remove the 
characters we will check each characters of the string , if the character checked found to be a non alphabetical 
character then we will remove the character and store the remaining string as it is. We will iterate this step 
through a for loop until every non alphabet character is removed.
*/

#include <stdio.h>

void characterRemover1(char string[], char array[]) // function 1 using 2 character array
{
    int i = 0;
    int count = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
        {
            array[count] = string[i];
            count++;
        }
        i++;
    }
}

void characterRemover2(char string[]) // function 2 using shifting current array
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
            ;
        else
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
    char string[20];
    char array[20] = {'\0'};
    printf("enter the string\n");
    gets(string);
    characterRemover1(string, array);
    characterRemover2(string);
    printf("the modified string is\n");
    puts(array);
    puts(string);
    return 0;
}