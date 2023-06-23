#include <math.h>
#include <stdio.h>

int main()
{
    float val1, val2, answer;
    char operator;
    printf("\n Choose the operation :");
    scanf("%c", &operator);
    printf("\n Enter the values :");
    scanf("%f%f", &val1, &val2);

    switch (operator)
    {
    case '+':
        answer = val1 + val2;
        break;
    case '-':
        answer = val1 - val2;
        break;
    case '*':
        answer = val1 * val2;
        break;
    case '/':
        if (val2 == 0)
        {
            printf("\n Infinite \n");
        }
        else
        {
            answer = val1 / val2;
        }

        break;
    case '^':
        answer = pow(val1, val2);
        break;
    default:
        printf("\n Invalid \n");
        break;
    }
    printf("\n The result of %f %c %f is : %f", val1, operator, val2, answer);
    return 0;
}