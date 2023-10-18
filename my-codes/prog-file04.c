
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f1,*f2;
	char name[20];
	int i;

	f1=fopen("even.dat","w");
	f2=fopen("odd.dat","w");
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			fprintf(f1,"\n %d",i);
		else
			fprintf(f2,"\n %d",i);
	}
	fclose(f2);
	fclose(f1);
	return 0;
}