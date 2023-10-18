/* write a c program to check whether student pass or fail
 by computing excepting the five sub marks from the user if student
  is pass print the total and percentage of student asume maximum 
  marks as 100 and min marks as 40 using or (||) oprater*/
  /* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int s1,s2,s3,s4,s5,total;
    float percentage;
    printf("\n Enter  marks of 5 subject :");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1<=40||s2<=40||s3<=40||s4<=40||s5<=40)
    {
        {
        printf("\n  student is fail");
        }
    total =s1+s2+s3+s4+s5;
    percentage=total/5.0;
    printf(" total is %d",total);
    printf("\n percentage %.2f",percentage);
    }
    else
    {
        {
        printf("\n student is pass");
        }
    total =s1+s2+s3+s4+s5;
    percentage=total/5.0;
    printf(" total is %d",total);
    printf("\n percentage %.2f",percentage);
    }
    
  }