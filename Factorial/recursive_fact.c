#include <stdio.h>

int f(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * f(n - 1));
    }
}
int main()
{
    int number, fact;
    printf("\n Enter a value :");
    scanf("%d", &number);
    fact = f(number);
    printf("\n Factorial of %d is %d", number, fact);
    return 0;
}