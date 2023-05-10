/*aim:-

a)  write a c program to find the large number from the given three number from the user 

theory:-

 the if -else statements in c used to perform the operation based on some specific condition
 the operations specified in if block are executed if and only if the given condition is true 
 there are the following variants of if statements in c language .
 @ if statement
 @ if-else statements 
 @ if else-if ladder
 @ nested if
 */
#include<stdio.h>
int main()
{
int a,b,c;

printf     ("\n Enter any three numbers :");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("\n %d is greater",a);
}
else
{
if(b>c)
{
printf("\n %d is greater",b);
}
else
{
printf("\n %d is greater",c);
}
}
}
 
 
