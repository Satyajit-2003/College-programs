#include<stdio.h>

//WAP to find out the transpose of a given matrix.

int main(){
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int mat[row][col], transpose[col][row];
    printf("Enter elements of the matrix: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat[i][j] = rand()%100;
            printf("%d ", mat[i][j]);
        }printf("\n");
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            transpose[j][i] = mat[i][j] ;
    }

    printf("The transpose is: \n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}