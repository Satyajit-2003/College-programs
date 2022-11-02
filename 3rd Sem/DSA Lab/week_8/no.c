#include<stdio.h>
#include<math.h>

int main(){
    int height;
    printf("Enter the height of the tree: ");
    scanf("%d", &height);

    int no_of_nodes = pow(2, height);
    int tree[no_of_nodes+1];

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

    for (int i = 1; i < height+1; i++){
        for (int j = pow(2, i-1); j < pow(2, i); j++){
            printf("%d  ", tree[j]);
        }
        printf("\n");
    }

    return 0;
}