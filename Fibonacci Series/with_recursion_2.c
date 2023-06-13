#include <stdio.h>

int Fib(int n)
{

    // first base condition check

    if (n == 0)
    {
        return 0; // returns 0 if condition meets
    }

    // second base condition check

    else if (n == 1)
    {
        return 1; // returns 1 if condition meets
    }
    // calling function recursively till we get to the base condition

    else
    {
        return Fib(n - 1) + Fib(n - 2); // recursively calling the function and adding them
    }
}

int main()
{
    int n, i;
    printf("\n Enter the number of elements :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", Fib(i));
    }
    return 0;
}