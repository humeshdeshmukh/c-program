/* write c program to print fabonical series and check rang valid or not */
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int f0, f1, f2, i, range;
    printf("\n Enter the range ");
    scanf("%d", &range);
    if (range <= 0)
    {
        printf("\n Invalid range");
    }
    else
    {
        if (range == 1)
        {
            printf("0");
        }
        else
        {
            i = 2;
            f0 = 0;
            f1 = 1;
            printf("\n %d\t%d", f0, f1);
            while (i < range)
            {
                f2 = f0 + f1;
                printf("\t%d", f2);
                f0 = f1;
                f1 = f2;
                i++;
            }
        }
    }
    return 0;
}