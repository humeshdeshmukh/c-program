/* write a c program to get
          1
        2   3
      4   5   6 
   7   8    9    10
11  12   13   14   15

*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int main()
{
    int i, j, l = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2d  ", l++);
        }
        printf("\n");
    }
    return 0;
}
