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

struct node* insert(struct node *root, int x)
{
    if (root == NULL) 
        root = getNewNode(x);
    else if (x <= root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

int search(struct node *root, int x)
{
    if (root == NULL) return 0;
    else if (root->data == x) return 1;
    else if (x <= root->data) return search(root->left, x);
    else return search(root->right, x);
}

int main(void)
{
    struct node *root = NULL;
    int number;
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 3);
    root = insert(root, 40);

    printf("Search a number: ");
    scanf("%d", &number);
    if (search(root, number))
        printf("Found\n");
    else
        printf("Not Found\n");
     
    return 0;
}