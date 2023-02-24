/* searching - it is process of searching on element present in an array it element is 
present then search is said to be  successfull search whears if no element  found
 then search is said to be unsucesssful search*/
 /*
 there are two type os search 
 1) linear search  2)Binary search*/
 /*  write a c-program to search an element present in a 
 array of size 10 using linear  search method*/
 
 /* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a[10];
    int i, num, pos, flag = 0;
    
    printf(" \n Enter any 10 element ");
      for(i=1;i<=10;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("\n Enter the number ");
      scanf("%d",&num);
      for(i=1;i<=10;i++)
      {
        if(a[i] == num)
        {
            printf(" \n search is successful");
            pos = i;
            flag = 1;
            printf("\n position of element is %d",pos);
            break;
        }
      }
      if (flag ==0)
      {
        printf("\n element not found");
      }
  }