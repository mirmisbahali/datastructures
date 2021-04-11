#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* getNewNode(int x)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = x;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

struct node* inesrt(struct node *root, int x)
{
    if (root == NULL) 
    {
        root = getNewNode(data);
        return root;
    }
}

int main(void)
{
    struct node *root = NULL;
    root = insert(root, 5);
    return 0;
}