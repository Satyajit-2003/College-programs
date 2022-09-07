#include<stdio.h>
#include<stdlib.h>

//WAP to sort rows of a dynamic matrix having m rows and n columns in
//ascending and columns in descending order.

int main(){
    int row,col,temp;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d",&col);
    row = col;
    int **a = (int **)malloc(row*sizeof(int *));
    for (int i = 0; i < row; i++)
        a[i] = (int *)malloc(col * sizeof(int));
    
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            a[i][j] = rand()%100;
    }
    printf("The matrix is: ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=j+1;k<col;k++){
                if(a[i][j]>a[i][k]){
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=j+1;k<col;k++){
                if(a[j][i]<a[k][i]){
                    temp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = temp;
                }
            }
        }
    }

    printf("The matrix after sorting: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}