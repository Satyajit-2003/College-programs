#include<stdio.h>
#include<stdlib.h>

//WAP to display the array elements in ascending order.

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
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }

    printf("The sorted arrays is :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr+i));

    return 0;
}