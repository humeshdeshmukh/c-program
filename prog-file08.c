
/*Program to Find Size of a File*/
#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char ch;
    int size = 0;
 
    fp = fopen("MyFile.txt", "r");
    if (fp == NULL)
    {
        printf("\nFile unable to open ");
    }
    else
    { 
        printf("\nFile opened ");
    }
    fseek(fp, 0, 2);    /* file pointer at the end of file */
    size = ftell(fp);   /* take a position of file pointer un size variable */
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
}