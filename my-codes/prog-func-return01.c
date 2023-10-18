/*write user difine function reverse which will return the reverse of any number pass from the function main*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
int reverse(int num)
{
    int rev=0,d;
    while(num)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    return(rev);
}
int main()
{
    int a,b;
    printf("\n enter any number :");
    scanf("%d",&a);
    b=reverse(a);
    printf("\n reverse of %d is %d",a,b);
}