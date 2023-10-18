/*write a user diffine function larger which will
find the largest number from the give three number
all three not break will be pass from the function main*/

/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
void large(int n1,int n2,int n3)
{
    if(n1>n2&&n1>n3)
    {
        printf("\n %d is largest ",n1);
    }
    else
    {
        if(n2>n3)
        {
            printf("\n %d is largest ",n2);
        }
        else
        {
            printf("\n %d is largest ",n3);

        }

    }
}
int main()
{
    int a,b,c;
    printf("\n enter any three number :");
    scanf("%d%d%d",&a,&b,&c);
    large(a,b,c);
}