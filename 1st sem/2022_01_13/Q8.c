//Q8

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], *ptr;
    ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", arr+i);
    }
    
    printf("\nPrinting array: ");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(arr+i));
    
    return 0;
}
