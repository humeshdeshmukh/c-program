/*write a c program to find the greatest no from the given two no*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

 #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b;
    printf("\n Enter any two number ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("\n A=%d  is greater",a);
    }
    else if(b>a)
    { 
      
        
            printf("\n B=%d is greater",b);
        
    } 
    else 
  
       {
            printf("\n both number equal A=B");
        } 
        
    
    printf("\n");
  }