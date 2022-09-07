//7.Write a C program to right rotate an array.
#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    temp = arr[n-1];
    for (int i = n-2; i >= 0; i--)
        arr[i+1] = arr[i];
    arr[0] = temp;

    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    
    
    return 0;
}
