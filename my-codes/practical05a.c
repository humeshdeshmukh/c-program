#include <stdio.h>
#define MAX 5
void main()
{
    int a[MAX];
    int i, j, temp, k;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n Enter %d elements :", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Before sorting : \n ");
    for (i = 0; i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    for (i = 0; i < MAX - 1; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
