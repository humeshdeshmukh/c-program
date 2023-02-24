/* write a c program to find the area of rectangle*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

 #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int length,breath,area;
    printf("\n Enter  breath and length of rectangle :");
    scanf("%d%d",&length,&breath);
    
    area=length*breath;
    printf("\n Area of reactangle is %d",area);
  }