/*
   Sum of digits algorithm
   To get sum of each digits by c program,
   use the following algorithm :

     Step 1 : Get number by user
     Step 2 : Get the modulus / remainder of the number
     Step 3 : sum the remainder of the number
     Step 4 : Divide the number by 10 Step 5 : Repeat the step 2 while number is greater than 0.

*/

#include <stdio.h>
int main()
{
    int n, sum = 0, m;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}

/*

   Here is an example :
   n=123
   sum=0
   m=123%10=3
   sum=0+3=3
   n=123/10=12
   now n=12
   m=12%10=2
   sum=3+2=5
   n=12/10=1
   now n=1
   m=1%10=1
   sum=5+1=6
   n=1/10=0

*/