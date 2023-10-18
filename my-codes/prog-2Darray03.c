/* write a c program to perform the addition two matrix each of size 3*3*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#define MAX 3

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int i, j;

    printf("Enter matrix A elements for %d x %d matrix:\n", MAX, MAX);
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B elements for %d x %d matrix:\n", MAX, MAX);
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix A:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C = A + B:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
