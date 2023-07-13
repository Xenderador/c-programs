#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int n, int key)
{
    int low = 0, mid, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int i, n, key;
    printf("\n Enter the number:");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter the %d elements in ascending order:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter the key:");
    scanf("%d", &key);
    i = binarySearch(a, n, key);
    if (i == -1)
    {
        printf("\n Key element not found");
    }
    else
    {
        printf("\n %d is found at postion %d", key, i + 1);
    }
    return 0;
}