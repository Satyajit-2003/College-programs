#include<stdio.h>
#include<stdlib.h>

//WAP to construct a binary tree with given inorder and preorder traversals
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int in[],int pre[],int start,int end)
{
    static int preIndex=0;
    if(start>end)
        return NULL;
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=pre[preIndex++];
    t->left=NULL;
    t->right=NULL;
    if(start==end)
        return t;
    int i;
    for(i=start;i<=end;i++)
    {
        if(in[i]==t->data)
            break;
    }
    t->left=create(in,pre,start,i-1);
    t->right=create(in,pre,i+1,end);
    return t;
}

void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main()
{
    int in[]={4,2,5,1,3};
    int pre[]={1,2,4,5,3};
    int n=sizeof(in)/sizeof(in[0]);
    struct node *root=create(in,pre,0,n-1);
    inorder(root);
    return 0;
}
