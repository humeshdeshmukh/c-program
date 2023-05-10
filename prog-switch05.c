/*WACP to printf the number of day of the month where the month number is enterd to the keybord*/
/*for e.x if user press 3 the o/p should be 31 days , where user enter the o/p should be 30 days*/
/* Author: Humesh Deshmukh
   Roll no: 34
*/

#include <stdio.h>

int main()
{
    int month;
    printf("\n enter any month number as (jan=1,feb=2,....): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n there month countain of 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n there month contain of 30 days");
        break;
    case 2:
        printf("\n these month consists of 28 days");
        break;
    default:
        printf("\n you have enter wrong choice");
    }
}