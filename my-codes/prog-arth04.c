/* write a c program to find the sum of digit enterd by user*/
/* Author : Humesh Deshmukh
roll no : 34 */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int d1,d2,d3,d4,d5,sum,num;
    printf("\n Enter any five digit  number ");
    scanf("%d",&num);
        d1=num%10;
        num=num/10;
        d2=num%10;
        num=num/10;
        d3=num%10;
        num=num/10;
        d4= num%10;
        num=num/10;
        d5=num%10;
        sum=d1+d2+d3+d4+d5;
        printf("\n summ of 5git numbeer is %d",sum);
 }