#include <stdio.h>
#define MAX 3
int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int i, j, k;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n Enter matrix A element for %dx%d matrix", MAX, MAX);
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter matrix B element for %dx%d matrix", MAX, MAX);
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
            c[i][j] = 0;
            for (k = 0; k < MAX; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\n Matrix A\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix B\n");
    for (i = 0; i < MAX; i++)
        {
            for (j = 0; j < MAX; j++)
            {
                printf(" %d ", b[i][j]);
            }
            printf("\n");
        }
    printf("\n Matrix C\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
}
