/*write a c program function say servers which while reverce the no*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
void reverse ()
{
    int num ,rev ,d;
    printf("\n enter any number :");
    scanf("%d",&num);
    rev=0;
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;

    }
    printf("\n reverse=%d",rev);
}
int main()
{
    reverse();
}