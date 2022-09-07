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

    if (r != c)
    {
        printf("The matrix is not symetteric\n");
        return 0;
    }
    
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            trans[j][i] = arr1[i][j];
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (trans[i][j] != arr1[i][j])
            {
                printf("The matrix is not symettric");
                return 0;
            }     
        } 
    }

    printf("The matrix is symettric\n");  
    
    return 0;
}
