/* switch case statement is used allow is to execute code block among many afternatives */
/*write a menun driven program to perform the following*/
/*
1) Addition of two number
2) subtraction of two number
3) multiplication of two number
4) division of two number*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int choice;
  float a, b;
  printf("\n 1 Additon");
  printf("\n 2 subtraction");
  printf("\n 3 multiplication");
  printf("\n 4 division");
  printf("\n enter your choice :-\n");
  scanf("%d", &choice);
  switch (choice)

  {
  case 1:
    printf("\n enter any two number");
    scanf("\n%f%f", &a, &b);
    printf("\n %.2f+%.2f = %.2f", a, b, a + b);
    break;
  case 2:
    printf("\n enter any two number");
    scanf("\n%f%f", &a, &b);
    printf("\n %.2f-%.2f = %.2f", a, b, a - b);
    break;
  case 3:
    printf("\n enter any two number");
    scanf("\n%f%f", &a, &b);
    printf("\n %.2f*%.2f = %.2f", a, b, a * b);
    break;
  case 4:
    printf("\n enter any two number");
    scanf("\n%f%f", &a, &b);
    printf("\n %.2f/%.2f = %.2f", a, b, a / b);
    break;
  default:
    printf("\n you have enter the  wrong input ");
  }
}
