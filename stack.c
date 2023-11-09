#include <stdio.h>

#define size 5

void push();
void pop();
void display();
int isfull();
int isempty();
void peek();

int stack[size];
int top = -1;
int del, i;
void main()
{
    int choice, x, del;
    while (1)
    {
        printf("Enter Your Choice : \n1) Push\n2) Pop\n3) Display\n4) Peek\n5) Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Value to Insert : ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
        case 4:
            peek();
        case 5:
            return;
        default:
            printf("Enter Valid Input !!");
            break;
        }
    }
}
int isfull()
{
    if (top == size - 1)
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void push(int x)
{
    if (isfull())
    {
        printf("Overflow !");
    }
    else
    {
        top++;
        stack[top] = x;
        // printf("%d",top);
    }
}
void pop()
{
    if (isempty())
    {
        printf("Underflow !");
    }
    else
    {
        del = stack[top];
        printf("Poped Item is %d\n", del);
        top--;
    }
}
void display()
{
    i = 0;
    while (i <= top)
    {
        printf("%d\t", stack[i]);
        i++;
    }
}
void peek()
{
    printf("Top Element is : %d", stack[top]);
}