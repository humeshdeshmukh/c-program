/*  shorting-  it is a proces array the data assending either disending order their  are wheries method 
to short the element
ex. 1) silection short
2) booble selection short;
3) insertion sowrt
4) hip sowrt
5) readip sawort*/

/*write a c program to sort five number stored in an array selection short */

/* Author : Humesh Deshmukh 
 Roll no 34*/

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    int a[5];
    int i,j,temp;
    printf("\n enter 5 element");
    for (i=1;i<+5;i++);
    {
        scanf("%d",&a[i]);
    }
    printf("\n befor shorting ");
    for(i=1;i<=5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
  }