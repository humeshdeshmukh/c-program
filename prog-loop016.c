/* write a c program to get
  $ # $ # $
  $ # $ # $
  $ # $ # $
  $ # $ # $
  $ # $ # $
*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                printf("# ");
            }
            else
            {
                printf("$ ");
            }
        }
        printf("\n");
    }
    return 0;
}
