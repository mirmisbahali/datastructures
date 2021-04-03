// Printing a linked list using recursion
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node* insert(struct node *head, int x)
{
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp -> data = x;
  temp -> next = head;
  head = temp;
  return head;
}

void Print(struct node *head)
{
  if (head == NULL)
  {
    printf("\n");
    return;
  }
  printf("%d ", head -> data);
  Print(head -> next);
}

int main(void)
{
  struct node *head = NULL;
  int n = 5;
  
  for (int i = 1; i <= n; i++)
  {
    head = insert(head, i);
  }
  Print(head);

  return 0;
}