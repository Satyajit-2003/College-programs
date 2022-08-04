#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the rows in matrix: ");
    scanf("%d",&r);
    printf("Enter the column in matrix: ");
    scanf("%d",&c);

    int arr1[r][c],trans[c][r];

    printf("Enter elements for matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }        
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            trans[j][i] = arr1[i][j];
    }

    printf("Transpose of the matrix is : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            printf("%3d ", trans[i][j]);
        printf("\n");      
    }
    
    return 0;
}
