#include<stdio.h>
#include<stdlib.h>

//Given a dynamic array, WAP to print the 
//next greater element (NGE) for every element.

int NGE(int* arr, int j, int len);

int main(){
    int n, res;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%100;
        printf("%d ", *(arr+i));
    }
    printf("\nNGE:");

    for (int i = 0; i < n; i++)
    {
        res = NGE(arr, i, n);
        printf("\n%d --> %d", *(arr+i), res);
    }   

    return 0;
}

int NGE(int* arr, int j, int len){
    for (int i = j+1; i < len; i++)
    {
        if (*(arr+i)>*(arr+j))
            return *(arr+i);
    }

    return -1;    
}
