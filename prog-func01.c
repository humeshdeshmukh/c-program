/* function is independent block of code usialy writen  outside the 
main  the function their are two type of function*/
/* 1) standard library function 
2) user diffine function*/
/*
1) standard library function those function whoes function are prewriten code end
 it's awailable in varies headar file
like stdio.h,string.h etc
printf(), clrscr(), scanf(), getch(), strcmp(), str.cpy(),delay()*/
/*
user diffine function:- are those function and those writen by the user sence the 
user impliment 
main(), is knows as useer diffine function*/

/* write a  user diffine function at add which will the perform the addition of 2 number */

/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  void add()
  {
    int a,b;
    printf("\n enter any two number :");
    scanf("%d%d",&a,&b);
    printf("\n %d +%d = %d",a,b,a+b);
  }
  /// @brief 
  void main()
  {
    
    add();
    add();
    add();
  }