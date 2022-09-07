#include<stdio.h>
#include<stdlib.h>

//WAP to swap all the elements in the 1st column with all the corresponding
//elements in the last column, and 2nd column with the second last column
//and 3rd with 3rd last etc. of a 2-D dynamic array.

void letsdoeit(int* arr, int row, int col);

int main(){
    int row, col;
    int *arr;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter umber of columns: ");
    scanf("%d", &col);
    arr = (int *) malloc(row*col*sizeof(int));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(arr + (i*col)+ j) = rand()%10;
            printf("%d ", *(arr + (i*col) + j));
        }
        printf("\n");
    }
    letsdoeit(arr, row, col);

    printf("\nSwapped array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", *(arr + (i*col) + j));
        printf("\n");
    }

    return 0;
}

void letsdoeit(int* arr, int row, int col){
    for (int j = 0; j < col/2; j++)
    {
        for (int i = 0; i < row; i++)
        {
            *(arr + (i*col) + j) = *(arr + (i*col) + j) + *(arr + (i*col) + (col-j-1));
            *(arr + (i*col) + (col-j-1)) = *(arr + (i*col) + j) - *(arr + (i*col) + (col-j-1));
            *(arr + (i*col) + j) = *(arr + (i*col) + j) - *(arr + (i*col) + (col-j-1));
        }
    }    
}