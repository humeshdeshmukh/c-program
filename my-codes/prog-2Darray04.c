/* write a c program to perform  to find count the number of
positive number and negative number zero of matrix 4*4*/
/* Author : Humesh Deshmukh
 Roll no 34*/


#include <stdio.h>
#define MAX 4

int main()
{
    int a[MAX][MAX];
    int i, j, pcount = 0, zcount = 0, ncount = 0;
    
    printf("\n enter the matrix A elements 4* 4:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n matrix  elements are:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (a[i][j] > 0)
            {
                pcount++;
            }
            else if (a[i][j] == 0)
            {
                zcount++;
            }
            else
            {
                ncount++;
            }
        }
    }
    
    printf("\n total positive numbers: %d", pcount);
    printf("\n total negative numbers: %d", ncount);
    printf("\n total zeroes: %d", zcount);
    
    return 0;
}
