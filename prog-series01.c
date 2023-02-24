/* write a c program to generate the folliwing series
(1) 1 2 3 4  .....n
(2) 1 4 9 16 .....n^2
(3) 0 1 1 2 3 5 8 .....n */
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
     int i,n;
     printf("\n Enter any range ");
     scanf("%d",&n);
     i=1;
     while(i<=n)
     {
        printf("\t %d",i);
        i++;
     }
  }