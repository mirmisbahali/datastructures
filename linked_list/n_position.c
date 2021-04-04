/* Inserting a Number on nth position in a linked list */
#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;

};

struct Node *head = NULL;

void n_insert(int position, int x);
void insert(int x);
void Print();
int main()
{
  int x, i, n, position;

  printf("\tCreating List:\n");

  printf("How many numbers?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter number: ");
    scanf("%d", &x);
    insert(x);
    Print();

  }

  printf("\n\tInserting Number at nth position\n");
  printf("Number: ");
  scanf("%d", &x);
  printf("\nPosition: ");
  scanf("%d", &position);
  n_insert(position, x);
  Print();

  return 0;
}

void n_insert(int position, int x)
{
  int i;
  struct Node *node = (struct Node*)malloc(sizeof(struct Node));
  struct Node *temp = head;

  node -> data = x;
  for (i = 0; i < position; i++)
  {
    temp = temp -> next;
  }
  node -> next = temp -> next;
  temp -> next = node;

}

void insert(int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = x;
  temp -> next = NULL;
  if (head != NULL) temp -> next = head;
  head = temp;
}
void Print()
{
  struct Node *temp = head;
  printf("List is: ");
  while (temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}