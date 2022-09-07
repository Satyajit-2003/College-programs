#include<stdio.h>

int main()
{
    int r1,c1,r2,c2;
    printf("Enter rows for matrix 1: ");
    scanf("%d",&r1);
    printf("Enter columns for matrix 1: ");
    scanf("%d",&c1);
    printf("Enter rows for matrix 2: ");
    scanf("%d",&r2);
    printf("Enter columns for matrix 2: ");
    scanf("%d",&c2);

    if (c1 != r2)
    {
        printf("\nSorry!! The matrices cant be multiplied.");
        return 0;
    }

    int m1[r1][c1],m2[r2][c2], prod[r1][c2], sum;

    printf("Enter elements for matrix 1: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }        
    }

    printf("Enter elements for matrix 2: \n");    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }        
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            sum = 0;
            for (int k = 0; k < r2; k++)
                sum += m1[i][k]*m2[k][j];
            prod[i][j] = sum;          
        }
    }

    printf("\nProduct of the matrices: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%3d",prod[i][j]);
        printf("\n");
    }    
    
    return 0;
}
