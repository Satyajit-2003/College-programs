#include<stdio.h>
#include<stdlib.h>

/*Write a menu driven program to implement binary tree using linked list
and different traversals.*/

typedef struct st{
    int data;
    struct st* left;
    struct st* right;
} node;

void preorder(node* root){
    if (! root)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if (! root)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(node* root){
    if (! root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void insert(node ** root, int data){
    if (! (*root)){
        *root = (node *)malloc(sizeof(node));
        (*root)->data = data;
        (*root)->left = (*root)->right = NULL;
        return;
    }
    else if (data >= (*root)->data)
        insert(&((*root)->right), data);
    else if (data < (*root)->data)
        insert(&((*root)->left), data);
}

int main(){
    node* root = NULL;
    insert(&root, 5);    insert(&root, 2);
    insert(&root, 6);    insert(&root, 7);
    insert(&root, 8);    insert(&root, 1);
    insert(&root, 5);    insert(&root, 3);

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);

    return 0;    
}