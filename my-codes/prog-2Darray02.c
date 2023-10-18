/*write a c program to find the large  number ,smallerst number precent in matrix of 3*3*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3];
    int i, j, max, min;
    printf("\n enter matrix element for 3*3 matrix :");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = min = a[0][0];
    printf("\n enter matrix is :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
        max = a[0][0];
        min = a[0][0];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {

                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
                else
                {
                    if (a[i][j] < max)
                    {
                        max = a[i][j];
                    }
                }
            }
        }
    }
    printf("\n the longest number is %d", max);
    printf("\n the smallest number is %d", min);
}