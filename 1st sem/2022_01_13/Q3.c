//Q3

#include<stdio.h>

int main()
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size], dest[size];
    int *arr_ptr = arr;
    int *dest_ptr = dest;

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (arr_ptr + i));
    }

    for (i = 0; i < size; i++)
        *(dest_ptr+i) = *(arr_ptr + i);

    printf("\nDestination array after copying: ");
    for (i = 0; i < size; i++)
        printf("%d\t", *(dest_ptr + i));

    return 0;
}