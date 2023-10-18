/* write a c program to get 
  $ $ $ $ $
  # # # # #
  $ $ $ $ $
  # # # # #
  $ $ $ $ $
*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(i%2==1)
        {
            printf(" $");
        }
        else
        {
            printf(" #");
        }
        printf("\n");
    }

  }