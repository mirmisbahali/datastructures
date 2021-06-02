// Reverse a Linked List in groups of given size
// Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};



void reverse(struct Node **head, int k)
{
    int count=0;
    struct Node *current=*head, *prev=NULL, *next=NULL;
    while(count < k)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
        count++;
    }
    struct Node *first_end = prev;
    current = current -> next;
    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    prev = first_end;
}


void insert(struct Node **head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = *head;
    *head = temp;
}

void Print(struct Node *head)
{
    struct Node *temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(void)
{
    struct Node *head = NULL;
    int k = 4;

    for (int i = 1; i <= 8; i++)
        insert(&head, i);

    Print(head);

    reverse(&head, k);

    Print(head);

    return 0;
}