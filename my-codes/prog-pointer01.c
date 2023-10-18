/*pointer is special variable which is use to store the adress of another memory location*/

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
    printf("\n value of through pointer=%d",*p);
    printf("\n value of pointer variable =%u",p);
    printf("\n address of a=%u",&a);
    printf("\n address of p=%u",&p);
  }