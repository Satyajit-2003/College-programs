#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int* arr, int n){
    int i, j , key;

    for (int i = 1; i < n; i++){
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void reverse(int* arr, int size){
    for (int i = 0; i < size/2; i++){
        swap(arr+i, arr+size-i-1);
    }
}

int main(){
    srand(time(0));
    int* arr;
    time_t start, end;
    for (int size = 10000; size <= 100000; size += 10000){
        printf("\nFor input %d: \n", size);

        arr = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++){
            arr[i] = rand()%100;
        }

        start = clock();
        insertion_sort(arr, size);
        end = clock();
        printf("Time taken in average case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        insertion_sort(arr, size);  
        end = clock();
        printf("Time taken in best case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        reverse(arr, size);
        start = clock();
        insertion_sort(arr, size);
        end = clock();
        printf("Time taken in worst case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        free(arr);
    }
}

