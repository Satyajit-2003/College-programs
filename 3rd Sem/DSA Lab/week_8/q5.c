#include<stdio.h>
#include<stdlib.h>

/*WAP Write the following menu driven program for the binary search tree
----------------------------------------
Binary Search Tree Menu
----------------------------------------
1. Create
2. In-Order Traversal
3. Pre-Order Traversal
4. Post-Order traversal
5. Search
6. Find Smallest Element
7. Find Largest Element
8. Deletion of Tree
9. Quit*/

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

int search(node* root, int data){
    while (root){
        if (root->data == data)
            return 1;
        else if (root->data > data)
            root = root->left;
        else if(root->data < data)
            root = root->right;
    }
    return 0;
}

void delete(node* root){
    if (! root)
        return;
    delete(root->left);
    delete(root->right);
    free(root);
}

int main(){
    int ans, temp;
    node* root = NULL;
    while (1){
        printf("----------------------------------------\nBinary Search Tree Menu\n----------------------------------------\n1. Insert\n2. In-Order Traversal\n3. Pre-Order Traversal\n4. Post-Order traversal\n5. Search\n6. Find Smallest Element\n7. Find Largest Element\n8. Deletion of Tree\n9. Quit\n");
        scanf("%d", &ans);
        if (ans == 1){
            printf("Enter data: ");
            scanf("%d", &temp);
            insert(&root ,temp);
        }else if(ans == 2){
            inorder(root);
        }else if(ans == 3){
            preorder(root);
        }else if(ans == 4){
            postorder(root);
        }else if(ans == 5){
            printf("Enter data: ");
            scanf("%d", &temp);
            if (search(root, temp))
                printf("Element found");
            else
                printf("Element not found");
        }else if(ans == 6){
            printf("Smallest: %d", get_min(root));
        }else if(ans == 7){
            printf("Largest: %d", get_max(root));
        }else if(ans == 8){
            delete(root);
        }else if(ans == 9){
            break;
        }
        printf("\n");
    }
}