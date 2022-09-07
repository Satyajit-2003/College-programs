//10.C program to print alternate elements of the array
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array 1: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The alternate elements of the array are: ");
    for (int i = 0; i < n; i+=2)
        printf("%d\t",arr[i]);    
    
    return 0;
}