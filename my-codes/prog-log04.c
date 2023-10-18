/* write a c program to check whether enter year is
 leap year or not using logical oprater*/
 /* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int yr;
    printf("\n Enter any year :");
    scanf("%d",&yr);
    if((yr%100==0&&yr%400==0)||(yr%4==0))
    {
        printf("\n Enter yr  %d is leap year ",yr);
    }
    else
    {
        printf("\n Enter yr %d is not leap year ",yr);
    }
    printf("\n");
  }