#include <stdio.h>
#include <malloc.h>


char* time(int value , int *hr , int *min , int *sec)
{
    char* buffer = (char*)malloc(60 * sizeof(char));
    *hr = value/(60*60);
    *min = (value-(*hr * 60*60))/60;
    *sec = value-((*hr *60*60)+(*min *60));
    sprintf(buffer," number of hours are %d\n number of minutes are %d \n number of seconds are %d \n",*hr,*min,*sec);
    return buffer;
}


int main()
{
    int total_seconds,minute,hour,second;
    char* result;
    printf("enter the total time in seconds \n");
    scanf("%d",&total_seconds);
    result = time(total_seconds , &hour , &minute , &second);
    printf("%s",result);
    return 0;
}