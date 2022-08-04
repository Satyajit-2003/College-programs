#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the rows in 2D Array: ");
    scanf("%d",&r);
    printf("Enter the column in 2D Array: ");
    scanf("%d",&c);

    if (r != c)
    {
        printf("Sorry!! The trace of non square matrix cant be found");
        return 0;
    }

    int mat[r][c], trace = 0;

    printf("Enter elements for matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }        
    }

    for (int k = 0; k < r; k++)
        trace += mat[k][k];
    
    printf("The trace of the given matrix is %d", trace);   
    

    return 0;
}
