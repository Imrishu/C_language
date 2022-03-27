/*
      emi = loan * monthlyinterst / (1 - 1/(1 + monthlyinterest)^ (number of years * 12))

      1 <=loan <=1000000
      1 <=time <=50
      1 <= N<=30   

      decide which bank costs least
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int Amount, N, Tenure, T, bank[5];
    float rate, emi, sum = 0;
    scanf("%d", &Amount);
    if (Amount < 1 || Amount > 1000000)
        return 0;
    scanf("%d", &Tenure);
    if (Tenure < 1 || Tenure > 50)
        return 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &N);
        if (N < 1 || N > 30)
            return 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d %f", &T, &rate);
            int temp = pow((1 + rate), T * 12);
            emi = Amount * rate / (1 - 1 / temp);
            sum = sum + emi;
        }
        bank[i] = sum;
        sum = 0;
    }
    if (bank[0] > bank[1])
        printf("Bank B");
    else
        printf("Bank A");
    return 0;
}