/* write a c program to get 
  1 
  2 2 
  3 3 3 
  4 4 4 4
  5 5 5 5 5
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
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }

  }