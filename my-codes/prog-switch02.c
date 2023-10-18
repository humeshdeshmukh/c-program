/* Write a menu-driven program
1) to check whether number is even or odd
2) to check whether number is positive or negative or equal to zero
3) to check whether number is prime number
*/
/* Author: Humesh Deshmukh
   Roll no: 34
*/

#include <stdio.h>

int main()
{
    int ch, num, i;
    printf("\n 1: to check whether number is even or odd");
    printf("\n 2: to check whether number is positive or negative or equal to zero");
    printf("\n 3: to check whether number is prime number");
    printf("\n enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n enter your number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("\n number is even");
        }
        else
        {
            printf("\n number is odd");
        }
        break;
    case 2:
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
    case 3:
        printf("\n enter your number: ");
        scanf("%d", &num);
        if (num <= 1)
        {
            printf("\n number is not prime");-
        }
        else
        {
            for (i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    printf("\n number is not prime");
                    break;
                }
            }
            if (i > num / 2)
            {
                printf("\n number is prime");
            }
        }
        break;
    default:
        printf("\n invalid choice");
        break;
    }

    return 0;
}
/*rutik dhanraj     nikhare */