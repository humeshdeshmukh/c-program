/*write a c program to find enter year  is leap year or not */
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int yr;
    printf("\n Enter any year ");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
        {
            printf("\n leap year");
        }
        else
        {
            printf("\n not a leap year");
        }
    }
    else
    {
        if (yr % 4 == 0)
        {
            printf("\n leap year");
        }
        else
        {
            printf("\n not a leap year");
        }
    }
}