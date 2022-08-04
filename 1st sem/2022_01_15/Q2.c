//Q2

#include<stdio.h>

int main()
{
    int m,n, sum = 0, *ptr;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    ptr = &matrix[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("Enter %d,%d element of matrix: ", i+1, j+1);
           scanf("%d", ptr);
           ptr++;
        }        
    }

    ptr = &matrix[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           sum += *ptr;
           ptr++;
        }        
    }

    printf("Sum of the elements of the matrix is %d", sum);


    return 0;
}