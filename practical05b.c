#include <stdio.h>
#define MAX 5
int main()
{
    int a[MAX];
    int i, j, temp, k;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n Enter %d elements :", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Before sorting : \n ");
    for (i = 0; i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    for (i = 0; i < MAX - 1; i++)
    {
        for (j = 0; j < MAX - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            for (k = 0; k < MAX; k++)
            {
                printf(" %d", a[k]);
            }
            printf("\n");
        }
        printf("\n End of Pass %d", i + 1);
        printf("\n\n");
    }
    printf("\n After sorting : \n");
    for (i = 0; i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
}
