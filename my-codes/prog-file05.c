
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f1;
	char name[20];
	int age,i;
	float sal;

	f1=fopen("Person.txt","w");
	for(i=1;i<=5;i++)
	{
		printf("\n Enter The name of person: ");
		scanf("%s",name);
		printf("\n Enter the age of person: ");
		scanf("%d",&age);
		printf("\n Enter the salary of person: ");
		scanf("%f",&sal);
		fprintf(f1,"\n Name = %s  Age=%d  Salary=%f",name,age,sal);
	}
	fclose(f1);

}