#include<iostream>

#define MAX_L 10

using namespace std;

int top=0;

void push(int stack[], int x)
{
  if (top > MAX_L)
    cout << "Stack Full" << endl;
  else
    stack[top++] = x;

  return;
}

void Print(int stack[])
{
  for (int i = 0; i < top; i++)
    cout << stack[i] << " ";
  cout << endl;
  return;
}

int pop(int stack[])
{
  return stack[top--];
}
int main()
{
  int stack[MAX_L];

  push(stack, 5);
  push(stack, 10);
  push(stack, 32);
  push(stack, 12);
  push(stack, 40);
  Print(stack);
  pop(stack);
  Print(stack);
  return 0;
}