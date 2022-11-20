#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        // printf("t %d", root->left);
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

// int isBST(struct node *root)
// {
//     static struct node *prev = NULL;
//     if (root != NULL)
//     {
//         if (!isBST(root->left))
//         {
//             return 0;
//         }
//         if (prev != NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else
//     {
//         return 1;
//     }
// }

int isBST(struct node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    if (root->left != NULL && root->left->data >= root->data)
    {
        return 0;
    }
    if (root->right != NULL && root->right->data <= root->data)
    {
        return 0;
    }
    if (!isBST(root->left) || !isBST(root->right))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

struct node *insert(struct node *root, int key)
{
    if (root == NULL)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = key;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }

    // if (key == root->data)
    // {
    //     return root;
    // }
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    if (key > root->data)
    {
        root->right = insert(root->right, key);
    }
    return root;
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
} 

struct node *deleteNode(struct node *root, int value)
{

    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    // searching for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // deletion strategy when the node is found
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}


int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("\nPreOrder : ");
    preOrder(p);
    printf("\nInOrder : ");
    inOrder(p);
    printf("\nPostOrder : ");
    postOrder(p);

    // printf("\n");
    // printf("%d", isBST(p));
    if (isBST(p))
    {
        printf("\nThis tree is a BST");
    }
    else
    {
        printf("\nThis tree is not a BST");
    }

    printf("\n");
    struct node *n = search(p, 10);
    if (n != NULL)
    {
        printf("Found: %d", n->data);
    }
    else
    {
        printf("Element not found");
    }
    p = insert(p, 87);
    p = insert(p, 3);

    printf("\nInOrder : ");
    inOrder(p);
    return 0;
}