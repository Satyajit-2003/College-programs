#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int* arr = (int *)malloc(n * sizeof(int));
    int* prefixSum = (int*)malloc(n * sizeof(int));

    for (int i = 0 ; i < n; i++){
        arr[i] = rand()%10;
        printf("%d ", arr[i]);
    }

    printf("\n");

    prefixSum[0] = arr[0];
    for (int i = 1 ; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int i = 0 ; i < n; i++){
        printf("%d ", prefixSum[i]);
    }
    free(arr);
    free(prefixSum);

    return 0;
}