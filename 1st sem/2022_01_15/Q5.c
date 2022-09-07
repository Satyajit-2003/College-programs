//Q3

#include<stdio.h>

int main()
{
    int *ptr, size, *small;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    ptr = arr;
    small = arr;
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (ptr+i));
    }

    for (int i = 0; i < size; i++){
        if (*(ptr+i)<*small)
            small = ptr + i ;      
    }

    printf("The smallest element is %d", *small);
    
    
    return 0;
}
