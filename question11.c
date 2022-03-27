// occurance of the elements of the inputArrayay

#include <stdio.h>
#include <string.h>
#include <malloc.h>

int visited = -1;

int *countNumberFrequency(int inputArray[], int size)
{
    int *fre = (int *)malloc(size * sizeof(int));
    memset(fre, 0, size * sizeof(fre[0]));
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (inputArray[i] == inputArray[j] && fre[j] != visited)
            {
                count++;
                fre[j] = visited;
            }
        }
        if (fre[i] != visited)
            fre[i] = count;
    }
    return fre;
}

int main()
{
    int inputArray[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &inputArray[i]);
    int *fre = countNumberFrequency(inputArray, n);
    for (int i = 0; i < n; i++)
    {
        if (fre[i] != visited)
            printf("%d occurs %d times\n", inputArray[i], fre[i]);
    }
    for (int i = 0; i < n; i++)
    {
        free((void*)fre[i]);
    }
    return 0;
}

//  1 2 1 2 3

// 1 --- 2
// 2 --- 2
// 3 --- 1

// #include <stdio.h>
// #include <malloc.h>

// struct NumberFrequency
// {
//     int number, frequency;
// };

// struct NumberFrequency *CountNumberFrequency(int inputArray[], int n)
// {
//     struct NumberFrequency *frequency = (struct NumberFrequency *)malloc(n * sizeof(struct NumberFrequency));
//     for (int i = 0; i < n; i++)
//     {
//         int num = inputArray[i];
//         int count = 1;
//         struct NumberFrequency visited;
//         visited.frequency = -1;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (num == inputArray[j])
//             {
//                 count++;

//             }
//         }
//         struct NumberFrequency nf;
//         nf.number = num;
//         nf.frequency = count;
//         frequency[i] = nf;
//     }
//     return frequency;
// }

// int main()
// {
//     int array[4] = {1, 2, 1, 3};
//     struct NumberFrequency *value = CountNumberFrequency(array, 4);
//     for (int i = 0; i < 4; i++)
//         printf("%d-> %d\n", value[i].number, value[i].frequency);
//     return 0;
// }