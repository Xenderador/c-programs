#include <stdio.h>
#include <stdlib.h>

void insertionSort(int a[], int n)
{
    int i, j, v;
    for (i = 1; i < n; i++)
    {
        v = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}

int main()
{
    int n, i;
    printf("\n Enter the value of n:");
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
    insertionSort(a, n);
    printf("\n Elements after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}