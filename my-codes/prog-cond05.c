/*write a c program to find a smallest numer rom to enter number b by user*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b;
    printf("\n Enter any two number :");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("\n A=%d is smaller",a);
    }
    else 
    
           if(b<a)
    
        {
            printf("\n B=%d is smaller",b);
        }
        else
        {
            printf("\n both are equal A=B");
        }
      
    printf("\n");
    
   }
  