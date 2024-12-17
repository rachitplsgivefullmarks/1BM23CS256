#include <stdio.h>
#define MAX 3
int stack[MAX];
int top = -1;
void push(int n)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = n;
        printf("\n %d is pushed", n);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped %d from stack", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = top; i > -1; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
int main()
{
    int n, m;
    while (1)
    {
        printf("\n Enter 1 for push");
        printf("\n Enter 2 for pop");
        printf("\n Enter 3 for display\n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("\n enter element");
            scanf("%d", &m);
            push(m);
        }
        if (n == 2)
        {
            pop();
        }
        if (n == 3)
        {
            display();
        }
        if (n <= 0 || n >= 4)
        {
            break;
        }
    }
    return 0;
}
