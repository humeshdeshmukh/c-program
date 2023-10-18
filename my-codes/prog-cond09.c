/*write a c program to find the smallest no from the given five no*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a,b,c,d,e,min;
    printf("\n Enter any five number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    if(d<min)
    {
        min=d;
    }
    if(e<min)
    {
        min=e;
    }
    printf("\n %d is min",min);

  }  