#include<stdio.h>
#include<conio.h>
int main()
{
int f0,f1,f2,i,range;
printf("\n Name = Humesh Deshmukh \n Roll No: 34");
printf("\n Enter the range ");
scanf("%d",&range);
if(range<=0)
{
printf("\n Invalid range");
}
else
{
if(range==1)
{
printf("0");
}
else
{
i=2;
f0=0;
f1=1;
printf("\n %d\t%d",f0,f1);
while(i<range)
{
f2=f0+f1;
printf("\t%d",f2);
f0=f1;
f1=f2;
i++;
}
}
}
getch();
}