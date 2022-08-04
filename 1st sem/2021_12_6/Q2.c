//2.C program to print the cube of array elements
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The cubes of the elements are: ");
    for (int i = 0; i < n; i++)
        printf("%.0f\t",pow(arr[i],3));    
    
    return 0;
}
