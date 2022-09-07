//Q7

#include<stdio.h>

int main(){
    int row, column, *ptr;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);

    int mat1[row][column], mat2[row][column], sum[row][column];
    int *ptr1 = &mat1[0][0], *ptr2 = &mat2[0][0], *sptr = &sum[0][0];

    printf("Enter elements for matrix 1\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("Enter %d,%d element: ", i+1, j+1);
            scanf("%d", (ptr1+i)+j);
        }
    }
    printf("\nEnter elements for matrix 2\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("Enter %d,%d element: ", i+1, j+1);
            scanf("%d", (ptr2+i)+j);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < column; j++){
            *((sptr + i)+ j ) = *((ptr1 + i)+ j ) + *((ptr2 + i)+ j );
            printf("%d %d\n", mat1[i][j], mat2[i][j]);
    }}

    printf("Sum of the matrices is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < column; j++)
            printf("%d ", *(sptr + i)+j);
        printf("\n");
    }

    return 0;
}
