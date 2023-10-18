/* Author : Humesh Deshmukh 
 Roll no 34*/

#include<stdio.h>

int main()
{
    int a[5] = {2, 8, 6, 1, 5};
    int *ptr;

    ptr = a;
    printf("\n%d", *ptr);
    printf("\n%d", *(ptr + 2));
    printf("\n%d", *(ptr + 4));
    printf("\n%d", ptr[3]);
    printf("\nBase address stored in ptr = %p", (void *)ptr);
    printf("\nBase address stored in a = %p", (void *)a);
    ptr++;
    printf("\n%d", *ptr);
    ptr++;
    printf("\n%d", *ptr);
    printf("\n%d", *(ptr + 1));

    return 0;
}
