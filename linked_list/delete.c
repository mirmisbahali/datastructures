// Deleting a element from linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head;

void Delete(int n);
void insert(int x);
void Print(void);


int main(void)
{
  int n;

  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);

  Print();
  
  printf("Delete Index: ");
  scanf("%d",&n);

  Delete(n);

  Print();

  return 0;
}


void Delete(int n)
{
  struct node *temp1 = head, *temp2;

  if (n == 1)
  {
    head = temp1 -> next;
    free(temp1);
    return;
  }

  for (int i = 0; i < n-2; i++)
    temp1 = temp1 -> next;
  
  temp2 = temp1 -> next;
  temp1 -> next = temp2 -> next;
  free(temp2);

}

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
  printf("The list is: ");
  while(temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}