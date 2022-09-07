#include<stdio.h>

//WAP to find out the sum of the elements stored in a matrix.

int main(){
    int row, col;
    printf("Enter numm of row: ");
    scanf("%d", &row);
    printf("Enter numm of col: ");
    scanf("%d", &col);

    int mat[row][col], sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat[i][j] = rand()%10;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            sum += mat[i][j];
    }

    printf("The sum of the elements of the matrix is: %d", sum);
}