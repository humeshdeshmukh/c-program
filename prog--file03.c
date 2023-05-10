/* Author : Humesh Deshmukh
 Roll no 34*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char name[20];
	printf("\n Enter the Name : ");
	scanf("%s",name);
	fp=fopen(name,"a");
	fprintf(fp,"\n jgsuh asdbh aaaaaaaaaaaaaaaaaaaa");
	fclose(fp);
	getch();
}