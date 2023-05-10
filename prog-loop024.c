/* write a c program to get 
a b c d e
a b c d
a b c
a b 
a
*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,j;
    for (i=97;i<=101;i++)
    {
        for(j=i;j<=101;j++)
        {
            printf(" %c",j);
        }
        printf("\n");
    }

  }