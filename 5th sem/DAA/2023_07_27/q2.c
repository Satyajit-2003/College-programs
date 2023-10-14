#include<stdio.h>
#include<time.h>
#include<stdlib.h>

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

    int* freq = (int*)calloc(10, sizeof(int));

    for (int i = 0 ; i < n; i++){
        freq[arr[i]]++;
    }

    int max = 0, total = 0;
    for (int i = 0 ; i < 10; i++){
        if (freq[i] > 1){
            total++;
        }
        if (freq[i] > freq[max]){
            max = i;
        }
    }

    printf("\nTotal duplicate elements: %d\n", total);
    printf("Most frequent element: %d\n", max);

    free(freq);
    return 0;
}