/* write a c program to get 
e d c b a
e d c b 
e d c 
e d
e
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
        for(j=101;j>=i;j--)
        {
            printf(" %c",j);
        }
        printf("\n");
    }

  }