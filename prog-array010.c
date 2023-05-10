/* write a c program to find the occurance of any number precent in an array of single  10:*/
/* Author : HUMESH DESHMUKH Roll no 34*/

#include <stdio.h>

int main()
{
    int a[10];
    int i, num, count = 0;
    printf("\n Enter any 10 elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter the number: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == num)
        {
            count++;
        }
    }
    printf("\n Total occurrence of %d is %d", num, count);
    return 0;
}
