#include<stdio.h>
#include<conio.h>
int  main()
{
 FILE *fs,*ft;
 char source[20],target[20];
 char ch;
 printf("\n enter the source file name");
 scanf("%s",source);
 fs=fopen(source,"r");
 if(fs==NULL)
 {
  printf("\n file not found");
  getch();
  exit(0);
 }
 printf("\n enter the target file name:");
 scanf("%s",target);
 ft=fopen(target,"w");
 if(ft==NULL)
 {
  printf("\n unable to open file");
  getch();
  exit(0);
 }
 while((ch=fgetc(fs))!=EOF)
 {
  fputc(ch,ft);
 }
 printf("\n one file copied successfully");
 fclose(fs);
 fclose(ft);
 
}