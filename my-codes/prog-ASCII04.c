/*write a c program to  convert any capital letter into it's equivalent lower case letter*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    char ch;
    printf("\n Enter any  upper case letter :");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
   {
    ch=ch+32;
   }
   printf("\n lower case   letter equivalent=%c",ch);
  
}