/* write a c program to find the smallest  element present in an array size 10 :*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int main()
{
    int a[10];
    int i, min, pos = 0;
    printf("\n Enter any 10 element ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }
    printf("The smallest element is %d at position %d.", min, pos);
    return 0;
}
