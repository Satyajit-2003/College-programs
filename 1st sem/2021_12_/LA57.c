#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the rows in matrix: ");
    scanf("%d",&r);
    printf("Enter the column in matrix: ");
    scanf("%d",&c);

    int arr1[r][c],sum = 0;

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
            sum += arr1[i][j];       
    }

    printf("The sum of all elements of the given array is %d", sum);

    return 0;
}
