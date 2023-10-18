/*write a c program to print to check whether enter number amstrom or not by user while loop*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int num,sum,d,rio;
    printf("\n Enter any number :");
    scanf("%d",&num);
    sum=0;
    rio=num;
    while(num>0)
    {
        d=num%10;
        sum=sum*10+d;
        num=num/10;
    }
    if(sum==rio)
    {
        printf("\n it is amstrong number");
    }
    else
    {
        printf("\n it is not  amstrong number");
    }
 
  }