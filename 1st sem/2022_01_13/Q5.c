//Q5

#include<stdio.h>

int main(){
    int row, column, *ptr;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);

    int matrix[row][column];
    ptr = &matrix[0][0];

    for (int i = 0; i<row ; i++){
        for (int j = 0; j<column; j++){
            printf("Enter %d,%d element of the matrix: ", i+1,j+1);
            scanf("%d", (ptr+i)+j);
        }
    }


    for (int i = 0; i<row ; i++){
        for (int j = 0; j<column; j++)
            printf("%d ", *(ptr+i)+j);
        printf("\n");
    }    
    
    return 0;
}