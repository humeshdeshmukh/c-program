/* write a c program  to calculate the factorial of no */
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i,num,f;
    printf("\n Enter any number");
    scanf("%d",&num);
    f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("\n Factorial of %d is %d",num,f);
  } 