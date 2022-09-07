//4.C program to left rotate an array
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

    temp = arr[0];
    for (int i = 0; i < n-1; i++)
        arr[i] = arr[i+1];
    arr[n-1] = temp;

    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    
    
    return 0;
}
