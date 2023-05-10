/* write a c program to get 
  1 1 1 1 1 
  0 0 0 0 0 
  1 1 1 1 1 
  0 0 0 0 0 
  1 1 1 1 1 
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
        {
            printf(" %d",i%2);
        }
        printf("\n");
    }

  }