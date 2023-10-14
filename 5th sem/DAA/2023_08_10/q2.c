#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int n)
{
    int i, j, ind;
    for (i = 0; i < n - 1; i++) {

        ind = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[ind])
                ind = j;
        }

        if (ind != i)
            swap(arr+ind, arr+i);
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
        selection_sort(arr, size);
        end = clock();
        printf("Time taken in average case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        selection_sort(arr, size);  
        end = clock();
        printf("Time taken in best case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        reverse(arr, size);
        start = clock();
        selection_sort(arr, size);
        end = clock();
        printf("Time taken in worst case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        free(arr);
    }
}

