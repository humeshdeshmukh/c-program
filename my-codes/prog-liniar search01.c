#include<stdio.h>

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
  