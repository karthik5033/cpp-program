#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

typedef struct Node node;

node *createNode(int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root, int val)
{
    if (!root)
    {
       return createNode(val);
    }
    else if (root->val >= val)
    {
        root->right=insert(root->right, val);
    }
    else
        root->left=insert(root->left, val);
    return root;
}

void inorder(node *root){
    inorder(root->left);
    printf("%d", root->val);
    inorder(root->right);
}

void preorder(node *root)
{
    printf("%d",root->val);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->val);
}

node *inorderSuccessor(node *root){
    node *temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp;
}