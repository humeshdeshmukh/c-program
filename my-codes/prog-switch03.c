/* write a menu driven program to perform the following
1) check whether number is palindrom or not
2) check whether number  is Armstrong or not
3) check whether  number is position,negative or zero*/
/*
write a c program to implement menu driven sun that it get continue opration till user doesnn't want to countinue*/
/* Author: Humesh Deshmukh
   Roll no: 34
*/

#include <stdio.h>

int main()
{
    int ch, num, sum, rev, rio, d;
    printf("\n 1: to check whether number is palindrom or not");
    printf("\n 2: to check whether number is Armstrong");
    printf("\n 3: to check whether number is positive or negative or equal to zero");
    printf("\n enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n Enter any number :");
        scanf("%d", &num);
        rev = 0;
        rio = num;
        while (num > 0)
        {
            d = num % 10;
            rev = rev * 10 + d;
            num = num / 10;
        }
        if (rev == rio)
        {
            printf("\n it is palindrom number");
        }
        else
        {
            printf("\n not a palindrom number");
        }
        break;
    case 2:
        printf("\n Enter any number :");
        scanf("%d", &num);
        sum = 0;
        rio = num;
        while (num > 0)
        {
            d = num % 10;
            sum = sum * 10 + d;
            num = num / 10;
        }
        if (sum == rio)
        {
            printf("\n it is amstrong number");
        }
        else
        {
            printf("\n it is not  amstrong number");
        }
        break;
    case 3:
        printf("\n enter your number: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("\n number is negative");
        }
        else if (num > 0)
        {
            printf("\n number is positive");
        }
        else
        {
            printf("\n number is equal to zero");
        }
        break;
    default:
        printf("\n you have entered a wrong input");
    }
}