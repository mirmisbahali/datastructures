#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int x);
void Print(void);
int main() 
{

  int i, n, x;

  printf("How many numbers?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter number: \n");
    scanf("%d", &x);
    insert(x);
    Print();
  }

  return 0;
}

void insert(int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

  temp -> data = x;
  temp -> next = head;
  head = temp;

}

void Print()
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}