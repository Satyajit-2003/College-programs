#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0 ; i < n; i++){
        arr[i] = rand()%100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    int small = arr[0], large = arr[0];

    for (int i = 0 ; i < n; i++){
        if (arr[i] < small){
            small = arr[i];
        }
        if (arr[i] > large){
            large = arr[i];
        }
    }

    printf("Smallest: %d\nLargest: %d", small, large);

    return 0;
}