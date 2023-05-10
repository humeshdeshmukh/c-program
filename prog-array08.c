/*write a c program to count the number of positive no negative no and zero precent in array of size 15 :*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int main()
{
    int a[15];
    int i, pcount, ncount, zcount;
    printf("\n Enter any 15 element :");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);
    }
    pcount = ncount = zcount = 0;
    for (i = 0; i < 15; i++)
    {
        if (a[i] > 0)
        {
            pcount++;
        }
        if (a[i] < 0)
        {
            ncount++;
        }
        if (a[i] == 0)
        {
            zcount++;
        }
    }
    printf("\n array detail");
    for (i = 0; i < 15; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    printf("\n total positive no =%d", pcount);
    printf("\n total negative no =%d", ncount);
    printf("\n total  zero no =%d", zcount);
}