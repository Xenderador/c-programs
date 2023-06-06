#include <stdio.h>
#include <stdlib.h>
#define N 5
int top = -1, a[N];

void push(int x)
{
    if (top == N - 1)
    {
        printf("\n Overflow");
    }
    else
    {
        printf("\n The element to be pushed : %d", x);
        top++;
        a[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n Underflow");
    }
    else
    {
        int x = a[top];
        printf("\n The deleted item is %d", x);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
    }
}

int main()
{
    int s[10], item, ch; //'ch' means choice
    while (1)
    {
        printf("\n Enter your choice :");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter the element :");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n Invalid");
        }
    }
    return 0;
}
