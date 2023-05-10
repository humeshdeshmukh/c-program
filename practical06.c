#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10];
    int i, low, high, mid, flag, num;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n Enter any 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter number to be search: ");
    scanf("%d", &num);
    flag = 0;
    low = 0;
    high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == num)
        {
            printf("\n Search is successfull");
            printf("\n Element is present at position %d", mid);
            flag = 1;
            break;
        }
        else
        {
            if (a[mid] < num)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    printf("\n Array details \n");
    for (i = 0; i < 10; i++)
    {
        printf("\n a[%d] = %d ", i, a[i]);
    }
    if (flag == 0)
    {
        printf("\n Search is Unsuccessfull: Element not found");
    }
    getch();
}