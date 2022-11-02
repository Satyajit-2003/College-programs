#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*WAP to create a binary tree using Array and perform pre-order, in-order,
and post-order traversals.*/

int height, no_of_nodes;
int *tree;

int get_left_child(int index){
    if ((2*index) <= no_of_nodes)
        return (2*index);
    return -1;
}
int get_right_child(int index){
    if ((2*index +1) <= no_of_nodes)
        return (2*index +1);
    return -1;
}

void inorder(int index){
    if(index>0){
        inorder(get_left_child(index));
        printf("%d ",tree[index]);
        inorder(get_right_child(index));
    }
}

void preorder(int index){
    if(index>0){
        printf("%d ",tree[index]);
        preorder(get_left_child(index));
        preorder(get_right_child(index));
    }
}

void postorder(int index){
    if(index>0){
        postorder(get_left_child(index));
        postorder(get_right_child(index));
        printf("%d ",tree[index]);
    }
}

int main(){
    printf("Enter the height of the tree: ");
    scanf("%d", &height);

    no_of_nodes = pow(2, height);
    tree = (int *) malloc((no_of_nodes+1) * sizeof(int));

    tree[0] = no_of_nodes;
    printf("Enter root node: ");
    scanf("%d", &tree[1]);

    for (int i = 2; i < no_of_nodes; i++){
        if (! i%2){
            printf("Enter left child of %d node: ", i/2);
            scanf("%d", &tree[i]);
        }
        else{
            printf("Enter right child of %d node: ", i/2);
            scanf("%d", &tree[i]);
        }
    }

    printf("Inorder: ");
    inorder(1);
    printf("\nPreoredr: ");
    preorder(1);
    printf("\nPostorder: ");
    postorder(1);
    printf("\n");
    return 0;
}