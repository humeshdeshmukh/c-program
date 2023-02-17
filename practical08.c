#include <stdio.h>
int main ()
{
 /* local variable definition */
 int a ,b;
 printf("\n Name = Humesh Deshmukh \n Roll No: 34");
 printf("\n Enter any two numbers :");
 scanf("%d%d",&a,&b);
 printf("Before swap, value of a : %d\n", a );
 printf("Before swap, value of b : %d\n", b );
 /* calling a function to swap the values */
 swap(&a, &b);
 printf("After swap, value of a : %d\n", a );
 printf("After swap, value of b : %d\n", b );
 return 0;
}
void swap(int *x, int *y)
{
 int temp;
 temp = *x; /* save the value of x */
 *x = *y; /* put y into x */
 *y = temp; /* put temp into y */
}