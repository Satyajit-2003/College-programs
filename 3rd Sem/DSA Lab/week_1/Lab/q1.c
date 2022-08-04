#include<stdio.h>
#include<stdlib.h>

//WAP to find out the smallest and largest element 
//stored in an array of n integers.

int* largest(int* arr, int n);
int* smallest(int* arr, int n);

int main(){
    int n;
    int* arr;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    arr = (int *) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%100;
        printf("%d ", *(arr+i));
    }

    int *large = largest(arr, n);
    int *small = smallest(arr, n);
    printf("\nLargest element is %d", *large);
    printf("\nSmallest element is %d", *small);  

    return 0;
}

int* largest(int* arr, int n){
    int* large = arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i)>*large)
            large = arr+i;
    }

    return large;   

}

int* smallest(int* arr, int n){
    int* small = arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i)<*small)
            small = arr+i;
    }
    return small;
}