#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void enqueue(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = x;
    if (head == NULL)
    {
        temp -> next = head;
        head = temp;
        tail = temp;
    } else {
        temp -> next = NULL;
        tail -> next = temp;
        tail = temp;
    }
    
}

void dequeue(void)
{
    struct node *temp = head;
    head = temp -> next;
    free(temp);
}


void Print(void)
{
    struct node *temp = head;
    printf("\n");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        enqueue(i);
    }

    Print();
    dequeue();
    Print();
    return 0;
}