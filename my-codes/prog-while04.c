/*write a c program to print to find the sum of digit of a number of any number inter by user while loop*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int num, sum, d, rio;
  printf("\n Enter any number :");
  scanf("%d", &num);
  sum = 0;
  rio = num;
  while (num > 0)
  {
    d = num % 10;
    sum = sum + d;
    num = num / 10;
  }
  printf("\n sum of  number %d is %d ", rio, sum);
}