/*write a c program to swip two no using called by refrance*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int p,q;
    printf("\n enter any two number :");
    scanf("%d%d",&p,&q);
    printf("\n value befor swapping  : p=%d q=%d",p,q);
    swap(&p,&q);
    printf("\n value after swapping  p=%d q=%d",p,q);
}