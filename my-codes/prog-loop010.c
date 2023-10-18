
/* write a c program to get
50 50 50 50 50
40 40 40 40 40
30 30 30 30 30*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int i, j;
  for (i = 5; i >= 3; i--)
  {
    for (j = 1; j <= 3; j++)
    {
      printf(" %1d", i * 10);
    }
    printf("\n");
  }
}