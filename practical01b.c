#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("\n Name = Humesh Deshmukh \n Roll No: 34");
printf("\n Enter any Lower case character :");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
ch=ch-32;
}
printf("\n Upper case Equivalent = %c",ch);
getch();
}