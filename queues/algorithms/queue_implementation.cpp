#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* next;
};

node *front = NULL;
node *last = NULL;

void enqueue(int x)
{
    node *temp = (node*)malloc(sizeof(node));
    temp -> data = x;
    if (front == NULL)
    {
        temp -> next = front;
        front = temp;
        last = front;
    }
    else
    {
        temp->next = NULL;
        last -> next = temp;
        last = temp;
    }
    return;
    
}

void dequeue()
{
    node *temp = front;
    front = temp -> next;
    free(temp);

    return;
}

void Print(void)
{
    node *temp = front;

    printf("The list is: ");
    while (temp != NULL)
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
    for (int i = 1; i <= n; i++)
        enqueue(i);
    Print();
    dequeue();
    Print();
    return 0;
}