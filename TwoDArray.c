#include <stdio.h>
#include <stdlib.h>

int **TwoDArray(int rows, int columns)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        int *colPtr = (int *)malloc(columns * sizeof(int));
        matrix[i] = colPtr;
        int *ptr = matrix[i];
        for (int j = 0; j < columns; j++)
        {
            *ptr = i + j;
            ptr++;
        }
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows, int columns)
{
    printf("freeing matrix....\n");
    int **ptr = matrix;
    for (int i = 0; i < rows; i++)
    {
        int *cols = *ptr;
        for (int j = 0; j < columns; j++)
        {
            int *t = cols;
            printf(" %d - %u", *cols, t);
            cols++;
            free(t);
        }
        printf("\n");
        ptr++;
    }
}

void printMatrix(int **matrix, int rows, int columns)
{
    printf("printing matrix....\n");
    int **ptr = matrix;
    for (int i = 0; i < rows; i++)
    {
        int *cols = *ptr;
        for (int j = 0; j < columns; j++)
        {
            printf(" %d - %u", *cols, cols);
            cols++;
        }
        printf("\n");
        ptr++;
    }
}

int main()
{
    int row, column;
    printf("enter the rows and columns\n");
    scanf("%d %d", &row, &column);
    int **array = TwoDArray(row, column);
    printMatrix(array, row, column);
    freeMatrix(array, row, column);
    printMatrix(array, row, column);
    return 0;
}