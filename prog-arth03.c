/* write a c program a c program  to find  the sum of any tree digit no enter by the user */
/*Author : Humesh Deshmukh
roll no 34 */
 #include<stdio.h>
 #include<conio.h>
 int main()
    {
        int d1,d2,d3,sum,num;
        printf("\n Enter the any three value");
        scanf("%d",&num);
        d1=num%10;
        num=num/10;
        d2=num%10;
        num=num/10;
        d3=num%10;
        sum=d1+d2+d3;
        printf("\n sum of digit is %d",sum);
    }
 