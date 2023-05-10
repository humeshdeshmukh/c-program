/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a=10;
    int *p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("\n value of A=%d",a);
    printf("\n value of through pointer =%d",*p);
    printf("\n value through double pointer=%d",**q);
    printf("\n  value through triple pointer=%d",***r);
    printf("\n Address of A=%d",a);
    printf("\n Address of p=%d",p);
    printf("\n Address of Q=%d",q);
    printf("\n Address of R=%d",r);
    printf("\n Address of p=%d",p);
    printf("\n value of Q=%d",q);
    printf("\n Address of R=%d",r);
  }