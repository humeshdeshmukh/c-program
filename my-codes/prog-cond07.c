/*write a c program to find the smallest no from the given three no*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b,c;
    printf("\n Enter any three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("\n A=%d is smallest",a);
        }
        else 
        {
            printf("\n C=%d is smallest",c);
            
        }
    }
    else
         if(b<c)
         {
            printf("\n B=%d is smallest ",b);
         }
         else
         {
            printf("\n C=%d is smallest",c);
         }
  
  }

