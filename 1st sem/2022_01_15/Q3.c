//Q3

#include<stdio.h>

int main()
{
    int *ptr, prod = 1, size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    ptr = arr;
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (ptr+i));
    }

    for (int i = 0; i < size; i++)
        prod *= *(ptr+i);

    printf("The product is %d", prod);
    
    
    return 0;
}
