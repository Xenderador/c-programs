#include <stdio.h>

int main()
{
    int a = 3;

    // int b = ++a + a++ + --a;

    int b = ++a; // pre increment so a=4 then b=4

    b = b + a++; // post increment so a=4+1=5 then b=4+4=8

    b = b + --a; // pre decrement so a=5-1=4 then b=8+4=12

    printf("\n a is %d \n b is %d", a, b);
    return 0;
}