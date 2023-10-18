
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
 FILE *ep;
 char ch;
 int noc=0,nos=0,not=0,nol=0;

 ep=fopen("exam.c","r");
 if(ep==NULL)
 {
  printf("can't open the file");
  exit(0);
 }
 while(1)
 {
  ch=fgetc(ep);
  if(ch==EOF)
  {
		  break;
  }
  noc=noc+1;
  if(ch==' ')
  {
		  nos++;
  }
  if(ch=='\t')
  {
		   not++;
  }
  if(ch=='\n')
  {
			nol++;
  }
 }
 fclose(ep);
 printf("no of lines=%d \n",nol);
 printf("no of characters=%d \n ",noc);
 printf("no of tabs=%d \n ",not);
 printf("no of spaces=%d \n",nos);
 getch();
}