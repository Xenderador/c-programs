#include <stdio.h>

int main(){
    float a,b,add,sub,mul,div;
    printf("\n Enter the values of a and b : \n");
    scanf("%f%f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\n The Sum is %f \n The Difference is %f \n The Product is %f \n The Division is %f \n",add,sub,mul,div);
    return 0;
}