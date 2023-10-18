/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a=10;
    int *p;
    p=&a;
    printf("\n value of A=%d",a);
    printf("\n value of through pointer =%d",*p);
    a=a+10;
    printf("\n value of A=%d",*p);
    *p=*p*3;
    printf("\n value of A=%d",a);
    a++;
    printf("\n value of A=%d",*p);
    *p=*p-25;
    printf("\n value of A=%d",a);
  
  }