/*write a c program to print to check whether enter number palindrom or not by user while loop*/
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
    if(rev==rio)
    {
        printf("\n it is palindrom number");
    }
    else
    {
        printf("\n not a palindrom number");
    }
 
  }