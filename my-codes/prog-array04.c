/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5];
    int i ;
    printf("\n Enter any five number");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
}