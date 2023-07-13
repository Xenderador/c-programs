#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
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
    bubbleSort(a, n);
    printf("\n Elements after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}