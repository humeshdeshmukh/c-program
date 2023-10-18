/* write a c program to find the largest element present in an array size 10 :*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int main()
{
    int a[10];
    int i, max, pos = 0;
    printf("\n Enter any 10 element ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    printf("The largest element is %d at position %d.", max, pos);
    return 0;
}
