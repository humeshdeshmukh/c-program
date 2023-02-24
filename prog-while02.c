/*write a c program to print the table by using Square of any number inter by user while loop*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,num;
    printf("\n Enter any number :");
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
        printf("\n %d*%d=%d",i,num,i*num);
        i++;
    }
 
  }