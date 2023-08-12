/* name of array always store the bus adress base add sturting addr of array */
/* Author : Humesh Deshmukh 
 Roll no 34*/
#include<stdio.h>

int main() 
{
    int a[5] = {2, 8, 6, 1, 5};
    int *ptr, i;

    ptr = a;
    printf("Printing using name of the array:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("a[%d] = %d with address %n \n", i, a[i], &a[i]);
    }

    printf("\nPrinting using pointer:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("ptr[%d] = %d with address %p\n", i, *(ptr + i), ptr + i);
    }

    return 0;
}


