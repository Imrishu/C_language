#include <stdio.h>
#include <malloc.h>


char* password(int pin)
{
    char* buffer = (char*)malloc(30 * sizeof(char));
    if(pin==1234)
    {
        sprintf(buffer,"correct password \n");
        return buffer;
    }
    else
    {
        sprintf(buffer,"wrong password 'TRY AGAIN' \n");
        return buffer;
    }
}




int main()
{
    int pin;
    char* result;
    printf("enter the 4-digit password");
    scanf("%d",&pin);
    result = password(pin);
    printf("%s",result);
return 0;
}