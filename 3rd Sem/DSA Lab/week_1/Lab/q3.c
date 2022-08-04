#include<stdio.h>
#include<stdlib.h>

//WAP to search an element in a dynamic array of n numbers.
int find(int* arr, int ele, int n);

int main(){
    int n, element;
    int* arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%90;
        printf("%d ", *(arr+i));
    }

    printf("\nEnter element to search: ");
    scanf("%d", &element);

    int index = find(arr,element, n);

    if (index != -1)
        printf("Element found at index %d", index);
    else  
        printf("Element not found");
        

    return 0;
}

int find(int* arr, int ele, int n){
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i) == ele)
            return i;        
    }
    return -1;    
}