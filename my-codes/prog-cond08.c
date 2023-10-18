/*write a c program to find the largest no from the given five no*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b,c,d,e,max;
    printf("\n Enter any five number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    if(e>max)
    {
        max=e;
    }
    printf("\n %d is max",max);

  }  