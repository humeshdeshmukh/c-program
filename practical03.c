#include<stdio.h>
#include<conio.h>
int main()
{
int ch,num;
printf("\n Name = Humesh Deshmukh \n Roll No: 34");
printf("\n 1. Check for Even Odd number");
printf("\n 2. Check for Positive, Negative or Zero Number");
printf("\n Enter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter any numbers :");
scanf("%d",&num);
 if(num%2==0)
 {
printf("\n Number is Even");
 }
 else
 {
printf("\n Number is Odd");
 }
 break;
case 2:printf("\n Enter any numbers :");
 scanf("%d",&num);
 if(num>0)
 {
printf("\n Number is Positive");
 }
 else
 {
if(num<0)
{
printf("\n Number is Negative");
}
else
{
printf("\n Number is Zero");
}
 }
 break;
default: printf("\n You have entered the wrong input");
}
getch();
}