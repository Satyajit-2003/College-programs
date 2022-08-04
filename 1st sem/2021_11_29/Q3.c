#include<stdio.h>

int main()
{
    int n1,n2,j;

    printf("How many numbers you want to store in 1st array?");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        printf("Enter %d number(array1): ",i+1);
        scanf("%d",&arr1[i]);
    } 
    

    printf("How many numbers you want to store in 2nd array?");
    scanf("%d", &n2);
    int arr2[n2], arr[n1+n2];
    for (int i = 0; i < n2; i++)
    {
        printf("Enter %d number(array2): ",i+1);
        scanf("%d",&arr2[i]);
    }


    for (j = 0; j < n1; j++)
        arr[j] = arr1[j];
    for (int i = 0; i < n2; i++)
    {
       arr[j] = arr2[i];
       j++;
    }  
       
    
    printf("Elements after merging:\n ");
    for (int i = 0; i < n1+n2; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}