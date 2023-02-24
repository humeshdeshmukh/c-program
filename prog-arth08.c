/*write a c program to find the area of square*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

 #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int area,side;
    printf("\n Enter the value of side of square in cm :");
    scanf("%d",&side);

    area=side*side;
    printf("\n area of square is %d sq cm ",area);
  }