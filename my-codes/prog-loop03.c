/*write a c program to print the table of any no inter by user*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,num;
    printf("\n Enter any number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n square of %d*%d=%d",i,num,i*num);
    }
  }