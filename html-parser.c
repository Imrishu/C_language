#include <stdio.h>
#include<string.h>

// <h1>   this is my program   </h1>

void parser(char string[])
{
    int execute=0;
    int index=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='<')
        {
            execute=1;
            continue;
        }
        else if(string[i]=='>')
        {
            execute=0;
            continue;
        }
        if(execute==0)
        {
            string[index]=string[i];
            index++;
        }
    }
    string[index]='\0';

    while(string[0] == ' ')
    {
        for(int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }
    while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
}



int main()
{
    char string[50];
    printf("enter the string with html tag\n");
    gets(string);
    parser(string);
    printf("the parsed string is ~~~%s~~~\n",string);
    return 0;
}


