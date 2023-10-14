#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
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
        quick_sort(arr, 0, size-1);
        end = clock();
        printf("Time taken in average case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        quick_sort(arr, 0, size-1);  
        end = clock();
        printf("Time taken in best case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        reverse(arr, size);
        start = clock();
        quick_sort(arr, 0, size-1);
        end = clock();
        printf("Time taken in worst case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        free(arr);
    }
}

