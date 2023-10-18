/* write a c program to get 
  A A A A A 
  B B B B B
  C C C C C 
  D D D D D
  E E E E E
*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,j;
    for (i=65;i<=69;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf(" %C",i);
        }
        printf("\n");
    }

  }