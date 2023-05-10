
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *p, *q, *start;
void insertfirst();
int main()
{ 
    char ch;
    start = NULL;
    do
    {
        insertfirst();
        printf("\n want to continue....Y/N");
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    getch();
}
void insertfirst()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &(p->data));
    if (start == NULL)
    {
        start = p;
        p->link = NULL;
    }
    else
    {
        p->link = start;
        start = p;
    }
}