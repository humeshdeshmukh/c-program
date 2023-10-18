/* write a c program to check whether inter char is upper letter ,lower letter ,digit or special symbol*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    char ch;
    printf("\n Enter any charecter :");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    
        {
        printf("\n character is upper letter");
        }
    else
      if(ch>97&&ch<=122)
       {
        printf("\n character is lower letter");
       }
      
    else
      
        if(ch>=48&&ch<=57)
       {
         printf("\n character is digit");
       }
   else
        {
         printf("\n special symbol");
        }
    
    
  }