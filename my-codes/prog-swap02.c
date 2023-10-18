/* write a c program to swap two value without using three variable
 Authur: Humesh Deshmukh 
 roll no:
 34
 */

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("\n Enter any two value");
scanf("%d%d",&a,&b);
printf("\n Befor the swapping A=%d B=%d",a,b);
a=a+b;
b=a-b;
b=a-b;
printf("\n After swapping A=%d B=%d",a,b);

}