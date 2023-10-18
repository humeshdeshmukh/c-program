/*write a c program to print the square of  number from 1 to 10 using while loop*/
/*
<initilization>;
while(< condition>)
{
    ........
    ,,,,,,,
    <updation >
}
*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int i ;
    i=1;
    while(i<=20)
    {
        printf("\n Square of %d is %d",i,i*i);
        i++;
    }
  }