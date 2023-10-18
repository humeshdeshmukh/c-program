/* write a c program to find the greatest no from the given three no using logical oprater*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b,c;
    printf("\n Enter any three number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("\n A=%d is greatest number",a);
    }
    else
    {
        if(b>c)
        {
            printf("\n b=%d is greatest number",b);
        }
        else
        {
            printf("\n C=%d is greatest number ",c);
        }
    }
    printf("\n");
  }