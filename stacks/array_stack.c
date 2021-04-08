#include<stdio.h>

#define MAX_SIZE 10

int top = -1;
int arr[MAX_SIZE];

void push(int x);
void pop(void);
void Print(void);
int main(void)
{
    for (int i = 0; i < 20; i+=2)
    {
        push(i);
    }

    Print();
    pop();
    Print();

    return 0;
}

void push(int x)
{
    if (top <= MAX_SIZE)
    {
        arr[++top] = x;
        return;
    }
    return;
    
}
void Print(void)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void pop(void)
{
    arr[top] = 0;
    top--;
}