/* write a c program to get 
 5 4 3 2 1
 5 4 3 2
 5 4 3
 5 4
 5
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
        for(j=5;j>=i;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }

  }