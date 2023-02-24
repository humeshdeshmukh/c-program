/*write a c program to calculate simple intrest consider interest rate of 10.9%*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

 #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int A,P,r,t;
    printf("\n Enter (i) initial principle : \t (ii) time :" );
    scanf("%d%d",&P,&t);
    r=10.9;
    A=P*(1+r*t);
    printf("\n find amount is %d",A);
  }