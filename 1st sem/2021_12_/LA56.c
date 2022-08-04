#include<stdio.h>

int main()
{
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = n-1; i >= 0; i--)
        printf("%d\t",arr[i]);  

    return 0;
}
