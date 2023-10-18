/*write a c program to printf diadonal element of matrix 3 *3*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#define MAX 3

int main()
{
    int a[MAX][MAX];
    int i, j;

    printf("Enter matrix A elements for %d x %d matrix:\n", MAX, MAX);
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Matrix elements are:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n Diagonal elements are:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d\t", a[i][i]);
    }

    return 0;
}
