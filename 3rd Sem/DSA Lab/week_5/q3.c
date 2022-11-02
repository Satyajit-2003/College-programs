#include<stdio.h>
#include<stdlib.h>

int row, col;

int main(){
    printf("Enter the row and column of the matrix: ");
    scanf("%d %d", &row, &col);

    int no_of_ele = 0, temp;
    int org_mat [row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the element at %d, %d: ", i, j);
            scanf("%d", &org_mat[i][j]);
            if (org_mat[i][j]){
                no_of_ele ++;
            }
        }
    }

    int sparse_mat[no_of_ele+1][3];
    sparse_mat[0][0] = row;
    sparse_mat[0][1] = col;
    sparse_mat[0][2] = no_of_ele;

    temp = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j< col; j++){
            if (org_mat[i][j]){
                temp ++;
                sparse_mat[temp][0] = i;
                sparse_mat[temp][1] = j;
                sparse_mat[temp][2] = org_mat[i][j];
            }
        }
    }

    int transpose[no_of_ele+1][3];
    transpose[0][0] = sparse_mat[0][1];
    transpose[0][1] = sparse_mat[0][0];
    transpose[0][2] = sparse_mat[0][2];
    for (int i = 0; i <= no_of_ele; i++){
        transpose[i+1][0] = sparse_mat[i+1][1];
        transpose[i+1][1] = sparse_mat[i+1][0];
        transpose[i+1][2] = sparse_mat[i+1][2];
    }
    
    for (int i = 1; i <= no_of_ele; i++){
        for (int j = i+1; j <= no_of_ele; j++){
            if (transpose[i][0] > transpose[j][0]){
                int temp = transpose[i][0];
                transpose[i][0] = transpose[j][0];
                transpose[j][0] = temp;
                temp = transpose[i][1];
                transpose[i][1] = transpose[j][1];
                transpose[j][1] = temp;
                temp = transpose[i][2];
                transpose[i][2] = transpose[j][2];
                transpose[j][2] = temp;
            }
        }
    }

    printf("The triplet form of sparse matrix is: \n");
    for (int i = 0; i <= no_of_ele; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", sparse_mat[i][j]);
        }
        printf("\n");
    }

    printf("The triplet form of transpose of the sparse matrix is: \n");
    for (int i = 0; i <= no_of_ele; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
