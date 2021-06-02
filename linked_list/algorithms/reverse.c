// Reverse  a Linked List
// Given pinter to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between noes.

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void reverse(struct Node **head)
{
    struct Node *current = *head, *prev=NULL, *next=NULL;
    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
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

    for (int i = 1; i <= 5; i++)
        insert(&head, i);

    Print(head);

    reverse(&head);

    Print(head);

    return 0;
}

