/*write a c program to create  a matrix of side 3,3 and insert the data in it */


/* Author :Humesh Deshmukh 
 Roll no 34*/

  #include <stdio.h>
  #include <conio.h>

int main() 
{
    int a[3][3];
    int i, j;

    printf("Enter matrix elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix is:\n");
    for (i = 0; i < 3; i++)
     {
        for (j = 0; j < 3; j++)
         {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


}
