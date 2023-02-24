/* write a c program to get 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
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
        for(j=5;j>=1;j--)
        {
            printf(" %1d",j);
        }
        printf("\n");
    }

  }