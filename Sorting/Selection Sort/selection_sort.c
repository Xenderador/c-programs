#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int n, i;
    printf("\n Enter value of n:");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Elements before sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    selectionSort(a, n);
    printf("\n Elements after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}