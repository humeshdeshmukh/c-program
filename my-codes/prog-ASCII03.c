/* write a c program to convert the lower case letter it's equivalent upper case letter*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    char ch;
    printf("\n Enter any  lower case letter :");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
   {
    ch=ch-32;
   }
   printf("\n upper case  letter  equivalent=%c",ch);
  
}