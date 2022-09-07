#include<stdio.h>
#include<stdlib.h>

//WAP to add two matrices and display it.

int main(){
    int row, col;
    printf("Enter numm of row: ");
    scanf("%d", &row);
    printf("Enter numm of col: ");
    scanf("%d", &col);

    int mat1[row][col], mat2[row][col], sum[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat1[i][j] = rand()%10;
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat2[i][j] = rand()%10;
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Sum of two matrices: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}