#include <stdio.h>
#include <conio.h>
#define MAX 5
int front= -1;
int rear=-1;
int queue[MAX];
void insertion();
void deletion();
void display();
void main()
{
    int ch;

    while (1)
    {
        printf("\n 1 insertion ");
        printf("\n 2 deletion");
        printf("\n 3 display");
        printf("\n 4 exit ");
        printf("\n choice");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit();
            break;
        default:
            printf("\n wrong choice");
        }
    }
}

void insertion()
{
    int num;
    printf("\n enter the number to be entered");
    scanf("%d", &num);
    if (rear == MAX - 1)
    {
        printf("\n queue is full");
    }
    else
    {
        rear = rear + 1;
        queue[rear] = num;
    }
}

void deletion()
{
    int item;
    if (front == rear)
    {
        printf("\n queue is empty");
        front=-1;
        rear=-1;
    }
    else
    {    front==front+1;
         item=queue[front];
        printf("\n Deleted element is : %d",item );
        
    }
}

void display()
{
    int i;
    if (front == rear)
    {
        printf("\n queue is empty");
    }
    else
    {
        for (i =front+1; i <= rear; i++)
        {
            printf("\n %d", queue[i]);
        }
    }
}

