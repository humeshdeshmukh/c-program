/* write a c program to find x^y*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int x, y, i, sum;
  printf("\n Enter x and y (x^y) :");
  scanf("%d%d", &x, &y);
  sum = 1;
  for (i = 1; i <= y; i++)
  {
    sum = sum * x;
  }
  printf("\n x^y=%d^%d=%d", x, y, sum);
}