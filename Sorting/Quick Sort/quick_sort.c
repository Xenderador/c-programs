#include <stdio.h>
#include <stdlib.h>

int HoarePartition(int a[], int l, int r)
{
    int p, i, j, temp;
    p = a[l];
    i = l;
    j = r + 1;
    do
    {
        do
        {
            i++;
        } while (a[i] < p && i <= r);
        do
        {
            j--;
        } while (a[j] > p);

        if (i <= r)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    if (i <= r)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int s = HoarePartition(a, l, r);
        quickSort(a, l, s - 1);
        quickSort(a, s + 1, r);
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
    quickSort(a, 0, n - 1);
    printf("\n Elements after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}