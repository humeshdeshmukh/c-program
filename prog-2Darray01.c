/*write a c program to create  a matrix of side 3,3 and insert the data in it */


/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a[3][3];
    int i,j;

    printf("\n enter matrix element for  3*3 matrix");
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n entered matrix is ");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++);
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
  }
