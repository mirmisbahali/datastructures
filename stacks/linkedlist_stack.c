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
void Print(void)
{
    struct node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;

    }
    printf("\n");
    return;
}
void pop(void)
{
    struct node *temp;
    temp = head;
    head = temp -> next;
    free(temp);
    return;
}
int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        insert(i);
    }
    Print();
    pop();
    Print();
    return 0;
}