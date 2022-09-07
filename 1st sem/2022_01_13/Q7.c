//Q8

#include<stdio.h>

int main(){
    int size, *ptr1, *ptr2, temp;
    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    ptr1 = arr1;
    ptr2 = arr2;

    printf("Enter elements of array 1\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", ptr1+i);
    }
    printf("\nEnter elements of array 2\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", ptr2+i);
    }

    for (int i = 0; i < size; i++)
    {
        temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2+i);
        *(ptr2+i) = temp;
    }

    printf("\nArray 1 after swapping\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr1+ i));
    printf("\nArray 2 after swapping\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr2+ i)); 

    return 0;
}