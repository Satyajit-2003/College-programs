#include<stdio.h>
#include<stdlib.h>

//WAP to multiply two matrices and display it.

int main(){
    int row1, col1, row2, col2, sum;
    printf("Enter row and column for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter row and column for matrix 2: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2){
        printf("The matrices can not be multiplied.");
        return 0;
    }

    int mat1[row1][col1], mat2[row2][col2], prod[row1][col2];

    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            mat1[i][j] = rand()%10;
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            mat2[i][j] = rand()%10;
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            sum = 0;
            for (int k = 0; k < col1; k++)
                sum += mat1[i][k] * mat2[k][j];
            prod[i][j] = sum;
        }
    }

    printf("Product of two matrices: \n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    

}