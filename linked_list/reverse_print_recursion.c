// Print Linked List in reverse order using recursion
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void insert(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

struct node* Print(struct node *p)
{
    if (p == NULL)
        return p;
    Print(p->next);
    printf("%d ", p -> data);
    return p;
}

int main(void)
{
    for (int i = 0; i <= 5; i++)
    {
        insert(i);
    }
    Print(head);
    printf("\n");

    return 0;
}