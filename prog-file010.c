
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fs, *ft;
    char source[20], target[20];
    char ch;

    printf("\n Enter the source file name: ");
    fflush(stdin);
    scanf("%s", source);
    fs = fopen(source, "r");
    if (fs == NULL)
    {
        printf("\n File not found");
        getch();
        exit(0);
    }
    printf("\n Enter the Target file name: ");
    scanf("%s", target);
    ft = fopen(target, "w");
    if (ft == NULL)
    {
        printf("\n Unable to open File");
        getch();
        exit(0);
    }
    fflush(stdin);
    while ((ch = getc(fs)) != EOF)
    {
        putc(ch, ft);
    }
    printf("\n One File copied Succesfully");
    fclose(ft);
    fclose(fs);
}