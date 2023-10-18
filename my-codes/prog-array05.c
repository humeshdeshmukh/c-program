/* write a c program to find the sum and average of number stored in an array of size 5*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5];
    int i, avg, sum = 0;
    printf("\n Enter any five number :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("\n array detail");
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    avg = sum / 5.0;
    printf("\n sum of array element %d", sum);
    printf("\n average of array element %d",avg);
}