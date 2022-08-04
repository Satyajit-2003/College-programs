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

    if (c!= r)
    {
        printf("The matrix is not orthogonal\n");
        return 0;
    }
    

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            trans[j][i] = arr1[i][j];
    }

    int prod[c][r], sum;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = 0;
            for (int k = 0; k < r; k++)
                sum += trans[i][k]*arr1[k][j];
            prod[i][j] = sum;          
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                if (prod[i][j]!= 1)
                {
                    printf("The matrix is not orthogonal\n");
                    return 0;
                }                
            }
            if (i!=j)
            {
                if (prod[i][j] != 0)
                {
                    printf("The matrix is not orthogonal\n");
                    return 0;
                }                
            }          
        }        
    }

    printf("The matrix is orthogonal\n");    
    
    
    return 0;
}
