// Implementing Queue using array
#include <stdio.h>

#define MAX_SIZE 10

int front = -1, rear = -1, arr[MAX_SIZE];

void enqueue(int x)
{
    if (front == rear && front == -1)
    {
        front = rear = 0;
    } else if (rear == MAX_SIZE && front != 0) {
        rear = (rear + 1) % 10;
        front = rear;
        rear = MAX_SIZE;
        arr[front] = x;
        return;

    } else {
        rear++;
    }
    arr[rear] = x;
    return;
}

void dequeue(void)
{
    if (front == rear && front == -1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    front++;
}

int main(void)
{
    for (int i = 0; i <= MAX_SIZE; i++)
    {
        enqueue(i);
    }
    dequeue();
    dequeue();
    enqueue(6);
    printf("The array is: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}