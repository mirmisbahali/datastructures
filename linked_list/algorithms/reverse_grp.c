// Reverse a Linked List in groups of given size
// Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};



struct Node* reverse(struct Node *head, int k)
{
    if (!head) return NULL;
    
    int count = 0;
    struct Node *current = head, *prev = NULL, *next = NULL;
    while (count < k && current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next != NULL) head->next = reverse(next, k);

    return prev;
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
    int k = 2;

    for (int i = 1; i <= 20; i++)
        insert(&head, i);

    Print(head);

    head = reverse(head, k);

    Print(head);

    return 0;
}