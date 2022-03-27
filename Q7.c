#include <stdio.h>

int benchCount(int M, int N, int P)
{
    int benches = 0;
    long X = M + N;
    if (M <= 0 || N <= 0)
        return 0;
    if (P < 0)
        P = 0;
    if (M >= P && N >= P)
    {
        benches = benches + P;
        M = M - P;
        N = N - P; 
    }
    if (X >= 3 && M > 0 && N > 0)
    {
        benches = benches + (X) / 3;
    }
    return benches;
}

int main()
{
    int M, N, P;
    scanf("%d", &M);
    scanf("%d", &N);
    scanf("%d", &P);
    int benches = benchCount(M, N, P);
    printf("%d", benches);
    return 0;
}
