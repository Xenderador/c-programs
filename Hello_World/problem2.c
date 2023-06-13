#include <stdio.h>
int main()
{
    int a, b = 1, c = 1;

    a = ++b + c++; // a= (1+1)+1=3 , b=1+1=2, c=1+1=2

    b = a++ + --c; // b= 3+(2-1)=4 , a=3+1=4, c=2-1=1

    c = ++a + b++; // c= (4+1)+4=9 , a=4+1=5, b=4+1=5

    printf("\n a= %d \n b=%d \n c=%d", a, b, c);
    return 0;
}