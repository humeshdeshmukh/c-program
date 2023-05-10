/*write a c program to print to find the revers of digit of a number of any number inter by user while loop*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int num,rev,d,rio;
    printf("\n Enter any number :");
    scanf("%d",&num);
    rev=0;
    rio=num;
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
      printf("\n reverce of  number %d is %d ",rio,rev);
 
  }