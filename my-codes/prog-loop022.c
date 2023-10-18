/* write a c program to get 
 a 
 b b
 c c c
 d d d d
 e e e e e
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
        for(j=97;j<=i;j++)
        {
            printf(" %c",i);
        }
        printf("\n");
    }

  }