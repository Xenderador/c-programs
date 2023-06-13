#include <stdio.h>
void Fib(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d", n3);
        Fib(n - 1);
    }
}
int main()
{
    int n;
    printf("\n Enter the number of elements :");
    scanf("%d", &n);
    printf("%d%d", 0, 1);
    Fib(n - 2);
    return 0;
}