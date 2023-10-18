/* write a c program to get 
  a b c d e
  a b c d e
  a b c d e
  a b c d e
  a b c d e
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
        for(j=97;j<=101;j++)
        {
            printf(" %C",j);
        }
        printf("\n");
    }

  }