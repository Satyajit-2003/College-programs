#include<stdio.h>
#include<stdlib.h>

/*WAP to implement level-order traversal using single Queue data structure.*/

typedef struct st{
    int data;
    struct st *left;
    struct st *right;
} node;
node* Queue[30];
int front =-1, rear = -1;

void push(node* data){
    rear++;
    Queue[rear] = data;
}

node* pop(){
    front++;
    return Queue[front];
}

int is_empty(){
    return (front == rear);
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

void level_order_travserse(node* root){
    push(root);
    node* temp;
    while (! is_empty()){
        temp = pop();
        printf("%d ", temp->data);
        if (temp->left)
            push(temp->left);
        if (temp->right)
            push(temp->right);
    }
}

int main(){
    node* root = NULL;
    insert(&root, 5);
    insert(&root, 2);
    insert(&root, 5);
    insert(&root, 7);
    insert(&root, 8);
    insert(&root, 1);
    insert(&root, 6);

    level_order_travserse(root);
    return 0;    
}