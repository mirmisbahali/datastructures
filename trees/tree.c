// Implementing Binary Search Tree

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

int findMin(struct node *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is Empty\n");
        return -1;
    }
    
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int findMax(struct node *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is Empty\n");
        return -1;
    }
    
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

int Max(int x, int y)
{
    if (x > y) return x;
    return y;
}

int findHeight(struct node *root)
{
    if (root == NULL) return -1;

    int leftHeight, rightHeight;
    leftHeight = findHeight(root->left);
    rightHeight = findHeight(root->right);

    return Max(leftHeight, rightHeight) + 1;
}

void Preorder(struct node *root)
{
  if (root == NULL) return;
  printf("%d ", root->data);
  Preorder(root->left);
  Preorder(root->right);
}
void Inorder(struct node *root)
{
  if (root == NULL) return;
  Inorder(root->left);
  printf("%d ", root->data);
  Inorder(root->right);
}
void Postorder(struct node *root)
{
  if (root == NULL) return;
  Postorder(root->left);
  Postorder(root->right);
  printf("%d ", root->data);
}

int main(void)
{
    struct node *root = NULL;
    int number;
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 3);
    root = insert(root, 40);

    // printf("Search a number: ");
    // scanf("%d", &number);
    // if (search(root, number))
    //     printf("Found\n");
    // else
    //     printf("Not Found\n");
    
    printf("Height of the Tree: %d\n", findHeight(root));

    Preorder(root);
    printf("\n");
    Inorder(root);
    printf("\n");
    Postorder(root);
    printf("\n");
     
    return 0;
}