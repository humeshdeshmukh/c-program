/* write a c program  to revers any three digit no enter by user*/
/* Author :Humesh Deshmukh
Roll No : 34 
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int d1,d2,d3,rev,num;
        printf("\n Enter the any three value");
        scanf("%d",&num);
        d1=num%10;
        num=num/10;
        d2=num%10;
        num=num/10;
        d3=num%10;
        rev=d1*100+d2*10+d3*1;
        printf("\n rev of digit is %d",rev);
}