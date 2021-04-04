// Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head;


void insert(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head;
    temp -> prev = head;

    if (head != NULL) 
    {
        struct node *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2 -> next = temp;
        temp -> next = NULL;
        temp -> prev = temp2;
        return;        
    }
    head = temp;


    
}

void Print()
{
    struct node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void Reverse_print()
{
    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp -> next;
    printf("Reverse List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp -> prev;
    }
    printf("\n");
}

int main(void)
{
    for(int i = 1; i <= 100; i*=2)
    {
        insert(i);
    }

    Print();
    Reverse_print();

    return 0;
}