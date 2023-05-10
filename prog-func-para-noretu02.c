/* write a user diffine function sumofdigite which will perform the sum of digit of numbeer pass from the functon main*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
void sumofdigit(int num)
{
    int sum,d;
    sum=0;
    while(num>0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;

    }
    printf("\n sum of digit=%d",sum);

}
int main()
{
    int num;
    printf("\n enter any number :");
    scanf("%d",&num);
    sumofdigit(num);
}