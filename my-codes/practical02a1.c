
/*aim:-
a) Write  a C program to generate following pattern
1)5 5 5 5 5 2) A A A A A  3) e e e e e  4) *
  4 4 4 4 4    B B B B B     d d d d       * *
  3 3 3 3 3    C C C C C     c c c         * * *
  2 2 2 2 2    D D D D D     b b           * * * *
  1 1 1 1 1    E E E E E     a             * * * * *

  theory:-
  The looping cab be defined as repeating the same process multiple time until a specific
  condition satisfies . there are three types of loop used in the c language . in this part of the
  tutorial, we are going to learn all the aspects of c loops.

  WHY USE LOOP IN C LANGUAGE?

    the looping simplifies the complex problems into easy onces. it enable us to alter the
   flow of the problem so that instead of writing the same code again and again , we can
   repeat the same code for a finite number of time . for example, if we need to print the
    first 10 loop which runs up to 10 iterations.

    ADVANTAGE OF loop in C

    1) it provides code reusability.
    2) using loop, we do not need to write the  same code again and again.
    3) using loops, we can traverse over the elements of data structure (array of linked lists.)

    types of loops

    there are three types of loops in c language that is given below:
    1. do while
    2. while
    3. for
  */

#include <stdio.h>
#include <conio.h>
int main()
{
  int i, j;
  printf("\n Name = Humesh Deshmukh \n Roll No: 34");
  printf("\n");
  for (i = 5; i > 1; i--)
  {
    for (j = 5; j >= 1; j--)
    {
      printf(" %d ", i);
    }
    printf("\n");
  }
  getch();
}
