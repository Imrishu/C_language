#include <stdio.h>
#include <math.h>
#include <errno.h>

#define TRUE 1
#define FALSE 0
typedef short int Bool;
const int max_rounds = 3;

Bool validate(int *arr)
{
    for (int i = 0; i < max_rounds; i++)
    {
        if (arr[i] < 1 || arr[i] > 100)
            return FALSE;
    }
    return TRUE;
}

int trainee(int *arr)
{
    float sum = 0;
    for (int i = 0; i < max_rounds; i++)
        sum = sum + arr[i];
    float average = sum / max_rounds;
    int T = round(average);
    return T;
}

char *selection(int T1, int T2, int T3)
{
    char *buffer = (char *)malloc(30 * sizeof(char));
    if (T1 < 70 && T2 < 70 && T3 < 70)
        sprintf(buffer, "All trainees are unfit");
    else if (T1 > T2 && T1 > T3)
        sprintf(buffer, "trainee1 is selected\nmaximum average oxygen level is %d", T1);
    else if (T2 > T1 && T2 > T3)
        sprintf(buffer, "trainee2 is selected\nmaximum average oxygen level is %d", T2);
    else if (T3 > T1 && T3 > T2)
        sprintf(buffer, "trainee3 is selected\nmaximum average oxygen level is %d", T3);
    else if (T1 == T2 && T1 == T3)
        sprintf(buffer, "All are selected\nmaximum average oxygen level is %d", T1);
    else if (T1 == T2)
        sprintf(buffer, "both trainee1 and trainee2 are selected\nmaximum average oxygen level is %d", T2);
    else if (T1 == T3)
        sprintf(buffer, "both trainee1 and trainee3 are selected\nmaximum average oxygen level is %d", T1);
    else if (T2 == T3)
        sprintf(buffer, "both trainee2 and trainee3 are selected\nmaximum average oxygen level is %d", T3);
    return buffer;
}

int main()
{
    int T[max_rounds][max_rounds];
    for (int trainee = 0; trainee < max_rounds; trainee++)
    {
        printf("please enter the oxygen level of Trainee%d \n", trainee + 1);
        for (int Olevel = 0; Olevel < max_rounds; Olevel++)
        {
            printf("Round : %d -----", Olevel + 1);
            scanf("%d", &T[trainee][Olevel]);
        }
        if (!validate(&T[trainee][0]))
        {
            perror("\ninvalid input");
            return -1;
        }
    }
    int Tr1 = trainee(&T[0][0]);
    int Tr2 = trainee(&T[1][0]);
    int Tr3 = trainee(&T[2][0]);

    printf("avg o2 trainee1--%d\n", Tr1);
    printf("avg o2 trainee2--%d\n", Tr2);
    printf("avg o2 trainee3--%d\n", Tr3);

    char *result = selection(Tr1, Tr2, Tr3);
    printf("\n");
    printf("%s", result);
    return 0;
}
