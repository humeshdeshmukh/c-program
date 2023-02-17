/* write a c program to swap two number */
/*auther: Humesh Deshmukh*/
/* roll no:34 */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("\n Enter any two number");
    scanf("%d%d",&a,&b);
    printf("\n Before Swapping A=%d B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping A=%d B=%d",a,b);
}