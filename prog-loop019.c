/* write a c program to get 
  5 5 5 5 5
  4 4 4 4
  3 3 3 
  2 2 
  1
*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,j;
    for (i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }

  }