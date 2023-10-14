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
        arr[i] = rand()%10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    int* ans = (int*)malloc(n * sizeof(int));
    for (int i = 0 ; i < n; i++){
        ans[i] = 1;
    }

    int pre = 1, post = 1;

    for (int i = 0 ; i < n; i++){
        ans[i] *= pre;
        pre *= arr[i];

        ans[n - i - 1] *= post;
        post *= arr[n - i - 1];
    }

    for (int i = 0 ; i < n; i++){
        printf("%d ", ans[i]);
    }
}