#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the rows in 2D Array: ");
    scanf("%d",&r);
    printf("Enter the column in 2D Array: ");
    scanf("%d",&c);

    int arr1[r][c],arr2[r][c], sum[r][c];

    printf("Enter elements for array1: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }        
    }

    printf("Enter elements for array2: \n");    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }        
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];       
    }



    printf("\nAddition of the matrices: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%3d",sum[i][j]);
        printf("\n");
    }    
    
    return 0;
}
