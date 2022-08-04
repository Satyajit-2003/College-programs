//9.C program to add and subtract elements of two One Dimensional Array and store in third array
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr1[n], arr2[n], diff[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array 1: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array 2: ",i+1);
        scanf("%d",&arr2[i]);
    }
    
    for (int i = 0; i < n; i++)
        diff[i] = arr1[i] - arr2[i];

    printf("The difference of the arrays is :\n");    
    for (int i = 0; i < n; i++)
        printf("%d\t", diff[i]);
    
    return 0;
}
