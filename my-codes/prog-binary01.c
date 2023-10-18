#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], a[i];
    int low, high, num, flag, pos, mid, i;

    printf("\n enter any 10 element");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &a[mid]);
    }
    printf("\n enter the number :");
    scanf("%d", &num);
    flag = 0;
    low = 0;
    high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a(mid) == num)
        {
            printf("\n search is successful");
            printf("\n position of element %d ", pos);
            flag = 1;
            break;
        }
        else if (a[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    {
        printf("\n array Detail");
        for (i = 0; i < 10; i++)
        {
            printf("\n a[%d]=%d", i, a[i]);
        }
        if (flag == 0)
        {
            printf("\n search unsuccessful");
        }
    }
}