#include <stdio.h>

int main()
{
    int sum = 0, n, r, temp;
    printf("\n Enter the number :");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("\n It is an Armstrong Number");
    }
    else
    {
        printf("\n Not an Armstrong Number");
    }
    return 0;
}
/* Here is an example :

   let n=153
   sum=0
   r=153%10=3
   sum=0+(3*3*3)=27
   n=153/10=15
   now n=15
   r=15%10=5
   sum=27+(5*5*5)=152
   n=15/10=1
   now n=1
   r=1%10=1
   sum=152+(1*1*1)=153
   n=1/10=0

*/
