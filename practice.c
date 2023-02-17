#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int max,i,pos=0;

    printf("\n Enter any 10 Element:");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i;
        }
    }
    printf("\n Array details \n");
    for(i=0;i<10;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\n Largest Element :%d is present at Location : %d",max,pos);

    
}



