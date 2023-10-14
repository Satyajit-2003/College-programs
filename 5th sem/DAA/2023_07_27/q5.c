#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rotateRight(int* arr, int n){
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main(){
    srand(time(0));
    int len, n;
    printf("Enter len: ");
    scanf("%d", &len);
    printf("Enter n: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(len * sizeof(int));

    for (int i = 0 ; i < len; i++){
        arr[i] = rand()%10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateRight(arr, n);

    for (int i = 0 ; i < len; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
}