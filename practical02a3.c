#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n");
    for (i = 101; i >= 97; i--)
    {
        for (j = 97; j <= i; j++)
        {
            printf(" %c ", i);
        }
        printf("\n");
    }
    getch();
}
