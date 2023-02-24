 /*write a c program to check enter number is a even number or odd number*/
 /* Author : Humesh Deshmukh 
 Roll no 34*/

 #include<stdio.h>
  #include<conio.h>
  int main()
  {  
    int num;
    printf("\n Enter any two number to check it even or odd  :");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\n number is even");
    }
    else
    {
        printf("\n number is odd");
    }
    printf("\n");
  }
