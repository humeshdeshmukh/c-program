/* Author : Humesh Deshmukh
 Roll no 34*/
#include <stdio.h>


#include <conio.h>
int main()
{
    FILE *fp;
    fp = fopen("smita.txt", "r");
    fprintf(fp, "aaaaaa.......");
    fclose(fp);
}