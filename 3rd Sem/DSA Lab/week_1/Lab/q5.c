#include<stdio.h>
#include<stdlib.h>

//Given an unsorted dynamic array of size n, 
//WAP to find and display the number of elements between two elements a and b

int between(int* arr, int n, int a, int b);

int main(){
    int n, a, b;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%39;
        printf("%d ", *(arr+i));
    }

    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    int res = between(arr, n, a, b);
    if (res != -1)
        printf("Number of elements between %d and %d is %d", a,b, res);
    else
        printf("Either of two elements is missing from array");

    return 0;
}

int between(int* arr, int n, int a, int b){
    int found = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (! found){
            if (*(arr+i) == a)
                found = 1;
        }
        if (found) {
            res ++;
            if (*(arr+i) == b)
                return res;            
        }
    }
    return -1;
}