#include<stdio.h>

//WAP to find the Trace(sum of the diagonal element) of a given mxn matrix

int main(){
    int side, trace = 0;
    printf("Enter row and columns of the square matrix: ");
    scanf("%d", &side);

    int mat[side][side];
    for (int i = 0; i < side; i ++){
        for(int j=0; j<side; j++){
            mat[i][j] = rand()%10;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < side; i++){
        trace += mat[i][i];
    }

    printf("The trace of the matrix is: %d", trace);

}