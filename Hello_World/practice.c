#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%f \n %f \n %f \n %f", pow(2, 3), sqrt(36.5), ceil(86.73), floor(86.73));

    char name[20];
    printf("\n Enter your name :");
    fgets(name, 20, stdin); // fgets takes the input from stdin (it reads the whole line)
    printf("\n Your name is %s", name);
    return 0;
}

// ceil - gives the round up highest number
// floor - gives the round up lowest number