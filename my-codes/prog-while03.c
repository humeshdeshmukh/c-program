/*write a c program to  find the factorial  of any number inter by user while loop*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, num, f;
    printf("\n Enter any number :");
    scanf("%d", &num);
    f = 1;
    i = 1;
    while (i <= num)
    {
        f = f * i;
        i++;
    }

    printf("\n  Factorial of %d is %d", num, f);
}