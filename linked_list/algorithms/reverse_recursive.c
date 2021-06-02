// Reverse a Linked List recursively

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node* reverse(struct Node *head)
{
    if (head == NULL)
        return head;
    
    struct Node *rest = reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;

    return rest;

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

    for (int i = 1; i <= 5; i++)
        insert(&head, i);

    Print(head);

    head = reverse(head);

    Print(head);

    return 0;
}