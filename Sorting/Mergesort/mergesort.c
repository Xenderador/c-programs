#include <stdio.h>
#include <stdlib.h>

void Merge(int b[], int c[], int a[], int p, int q)
{
    int i = 0, j = 0, k = 0;
    while (i < p && j < q)
    {
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }
    if (i == p)
    {
        while (j < q && k < (q + p))
        {
            a[k] = c[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < p && k < (q + p))
        {
            a[k] = b[i];
            k++;
            i++;
        }
    }
}

void mergeSort(int n, int a[])
{
    if (n > 1)
    {
        int i, j, len;
        len = n / 2;
        int b[len], c[n - len];
        for (i = 0, j = 0; i < len && j < len; i++, j++)
        {
            b[j] = a[i];
        }
        for (i = len, j = 0; i < n && j < n - len; i++, j++)
        {
            c[j] = a[i];
        }
        mergeSort(len, b);
        mergeSort(n - len, c);
        Merge(b, c, a, len, n - len);
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
    printf("\n Array before sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    mergeSort(n, a);
    printf("\n Array after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}