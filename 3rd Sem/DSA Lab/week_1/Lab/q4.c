#include<stdio.h>
#include<stdlib.h>

//WAP to sort a dynamic array of n numbers.

void sort(int* arr, int n);

int main(){
    int n;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%28;
        printf("%d ", *(arr+i));
    }
    printf("\n");

    sort(arr, n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr+i));

    return 0;    
    
}

void sort(int* arr, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }        
    }
}