/* write a c program to add  to array and store the result into the 3rd array*/
/* Author : HUMESH DESHMUKH Roll no 34*/

#include <stdio.h>

int main()
{
    int a[5], b[5], c[5];
    int i;
    printf("\n Enter any 5 number array A: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter any 5 number B:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n Array detail of A:");
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    printf("\n Array detail of B :");
    for (i = 0; i < 5; i++)
    {
        printf("\n b[%d]=%d", i, b[i]);
    }
    printf("\n array c detail");
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("\n c[%d]=%d", i, c[i]);
    }
    return 0;
}
