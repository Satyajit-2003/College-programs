//Q4

#include<stdio.h>

int main(){
    int *ptr, size, temp;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    ptr = arr;
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (ptr+i));
    }

    printf("\nBefore swapping\n");
    printf("First element : %d\nLast element: %d", arr[0], arr[size-1]);

    temp = *ptr;
    *ptr = *(ptr+size-1);
    *(ptr + size-1) = temp;

    printf("\nAfter swapping\n");
    printf("First element : %d\nLast element: %d", arr[0], arr[size-1]);    

    return 0;
}