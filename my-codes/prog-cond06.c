/*write a c program to find the largest no from the fiven three no*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b,c;
    printf("\n Enter any three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n A=%d is greater",a);
        }
        else 
        {
            printf("\n C=%d is greater",c);
            
        }
    }
    else
         if(b>c)
         {
            printf("\n B=%d is greater ",b);
         }
         else
         {
            printf("\n C=%d is greater",c);
         }
  
  }
