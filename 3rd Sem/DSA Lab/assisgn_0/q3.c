#include<stdio.h>

//WAP to find largest element stored in an array.

int main(){
    int n, sum = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        arr[i] = rand()%100;
        printf("%d ", arr[i]);        
    }
    printf("\n");

    int large = arr[0];
    for (int i = 1; i < n; i++){
        if (large < arr[i])
            large = arr[i];
    }
    printf("The largest element is: %d", large);

    return 0;
}