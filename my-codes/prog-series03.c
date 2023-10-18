/* write c program to pront the fbonacal series*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
   int i, f0, f1, f2, n;
   printf("\n Enter any range ");
   scanf("%d", &n);
   f0 = 0;
   f1 = 1;
   i = 2;
   while (i < n)
   {
      f2 = f0 + f1;
      printf("\t %d", f2);
      f0 = f1;
      f1 = f2;
      i++;
   }
}