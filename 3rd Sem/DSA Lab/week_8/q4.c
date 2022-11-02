#include<stdio.h>
#include<stdlib.h>

/*Write a menu driven program to create binary tree using linked list for
computing following information.
a) To count number of leaf nodes
b) To count number of non-leaf nodes
c) To find total number of nodes
d) To compute height of the binary tree
e) To find sum of all nodes
f) To find the minimum element
g) To find the maximum element*/

int leaf = 0, non_leaf = 0, total = 0, sum = 0, min, max, height;
typedef struct st{
    int data;
    struct st* left;
    struct st* right;
} node;

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

int find_max(int a, int b){
    if (a < b)
        return b;
    return a;
}

void traverse_and_calc(node* root){
    if (! root)
        return;
    if (!(root->left || root->right))
        leaf += 1;
    else
        non_leaf +=1;
    sum += root->data;
    total += 1;
    traverse_and_calc(root->left);
    traverse_and_calc(root->right);
}

int find_height(node* root){
    if (! root)
        return -1;
    return (find_max(find_height(root->left), find_height(root->right)) +1);
}

int get_max(node* root){
    while (root->right)
        root = root->right;
    return root->data;
}

int get_min(node* root){
    while (root->left)
        root = root->left;
    return root->data;
}

int main(){
    node* root = NULL;
    insert(&root, 5);    insert(&root, 2);
    insert(&root, 6);    insert(&root, 7);
    insert(&root, 8);    insert(&root, 1);
    insert(&root, 5);    insert(&root, 3);
    traverse_and_calc(root);
    height = find_height(root);
    max = get_max(root);
    min = get_min(root);

    printf("Leaf nodes: %d\n", leaf);
    printf("Non leaf nodes: %d\n", non_leaf);
    printf("Total nodes: %d\n", total);
    printf("Height: %d\n", height);
    printf("Sum of all nodes: %d\n", sum);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);


    return 0;    
}

