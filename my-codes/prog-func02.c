/*write a menu devain program to perform the following
addition of two number
subtraction of tlow number
 multiplication of two number
 divition of two number
*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <conio.h>
void add()
{
  int a, b;
  printf("\n enter any two numbers :");
  scanf("%d%d", &a, &b);
  printf("\n %d+%d=%d", a, b, a + b);
}
void sub()
{
  int a, b;
  printf("\n enter any two numbers :");
  scanf("%d%d", &a, &b);
  printf("\n %d-%d=%d", a, b, a - b);
}
void mult()
{
  int a, b;
  printf("\n enter any two numbers :");
  scanf("%d%d", &a, &b);
  printf("\n %d*%d=%d", a, b, a * b);
}
void div()
{
  int a, b;
  printf("\n enter any two numbers :");
  scanf("%d%d", &a, &b);
  printf("\n %d/%d=%d", a, b, a / b);
}

void main()
{
  int choice;
  while (1) // infinite loop
  {
    printf("\n 1.addition");
    printf("\n 2. subtraction");
    printf("\n 3. multiplication");
    printf("\n 4. division");
    printf("\n 5. enter your choice");
    scanf("%d", &choice);
    switch (choice)

    {
    case 1:
      add();
      break;
    case 2:
      sub();
      break;
    case 3:
      mult();
      break;
    case 4:
      div();
      break;
    case 5:
      exit(0);
    default:
      printf("\n invalid choice :");
    }
  }
}
