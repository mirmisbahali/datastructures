#include<bits/stdc++.h>

using namespace std;



struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void pop(void)
{
    struct node *temp = head;
    head = temp -> next;
    free(temp);
    return;
}

void Print(void)
{
    struct node *temp = head;
    printf("The List is: ");
    while (temp!=NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    return;
}

int main(void)
{
    int n = 5;
    for (int i = 0; i < n; i++)
        push(i);

    Print();
    pop();
    Print();
    return 0;
}