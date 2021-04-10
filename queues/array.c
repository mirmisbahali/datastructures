// Implementing Queue using array
#include <stdio.h>

#define MAX_SIZE 10

int front = -1, rear = -1, arr[MAX_SIZE];

int isFull(void)
{
    return (((rear + 1) % MAX_SIZE) == front);
}

int isEmpty(void)
{
    return (front == rear && front == -1);
}

void enqueue(int x)
{
    if (isEmpty())
    {
        front = rear = 0;
    } else if (isFull()) {
        printf("\nArray is full\n");
        return;

    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    arr[rear] = x;
    return;
}

void dequeue(void)
{
    if (isEmpty())
    {
        printf("\nQueue is empty\n");
        return;
    }
    front++;
}
void Print(void)
{
    if (isEmpty()) return;

    int i = front;
    do
    {
        printf("%d ", arr[i]);
        i++;
    } while (((i + 1) % MAX_SIZE) != rear);

    printf("\n");
}

int main(void)
{
    for (int i = 0; i <= MAX_SIZE; i++)
    {
        enqueue(i);
    }
    printf("The array is: ");
    // dequeue();
    Print();

    printf("\n");

    return 0;
}